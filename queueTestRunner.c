#include <stdio.h>

int testCount=-1;
int passCount=0;
void setup();
void tearDown();

void fixtureSetup();
void fixtureTearDown();
void incrementTestCount();
void incrementPassCount();
int currentTestFailed=0;

void testStarted(char* name){
	incrementTestCount();
	currentTestFailed=0;
	printf("\t%s\n",name);
}

void testEnded(){
	if(!currentTestFailed)
		incrementPassCount();
}

void resetTestCount(){
	testCount=0;
	passCount=0;
	printf("********* Starting tests\n\n");
}

void summarizeTestCount(){
	printf("\n********* Ran %d tests passed %d failed %d\n",testCount,passCount,testCount-passCount);
}

void incrementTestCount(){
	testCount++;
}

void incrementPassCount(){
	passCount++;
}

void testFailed(const char* fileName, int lineNumber, char* expression){
	currentTestFailed = 1;
	printf("\t\t %s : failed at %s:%d\n",expression, fileName,lineNumber);
}

int main(){
	fixtureSetup();
	resetTestCount();

	testStarted("test_1_create_a_queue_of_int_type");
	setup();
		test_1_create_a_queue_of_int_type();
	tearDown();
	testEnded();
	testStarted("test_2_create_a_queue_of_char_type");
	setup();
		test_2_create_a_queue_of_char_type();
	tearDown();
	testEnded();
	testStarted("test_3_create_a_queue_of_string_type");
	setup();
		test_3_create_a_queue_of_string_type();
	tearDown();
	testEnded();
	testStarted("test_4_enqueue_an_item_into_int_type_queue_when_it_is_not_full");
	setup();
		test_4_enqueue_an_item_into_int_type_queue_when_it_is_not_full();
	tearDown();
	testEnded();
	testStarted("test_5_enqueue_an_item_into_int_type_queue_when_it_is_full");
	setup();
		test_5_enqueue_an_item_into_int_type_queue_when_it_is_full();
	tearDown();
	testEnded();
	testStarted("test_6_enqueue_an_item_into_char_type_queue_when_it_is_not_full");
	setup();
		test_6_enqueue_an_item_into_char_type_queue_when_it_is_not_full();
	tearDown();
	testEnded();
	testStarted("test_7_enqueue_an_item_into_char_type_queue_when_it_is_full");
	setup();
		test_7_enqueue_an_item_into_char_type_queue_when_it_is_full();
	tearDown();
	testEnded();
	testStarted("test_8_enqueue_an_item_into_string_type_queue_when_it_is_not_full");
	setup();
		test_8_enqueue_an_item_into_string_type_queue_when_it_is_not_full();
	tearDown();
	testEnded();
	testStarted("test_9_enqueue_an_item_into_string_type_queue_when_it_is_full");
	setup();
		test_9_enqueue_an_item_into_string_type_queue_when_it_is_full();
	tearDown();
	testEnded();
	testStarted("test_10_dequeue_an_item_fron_int_type_queue_when_it_is_not_empty");
	setup();
		test_10_dequeue_an_item_fron_int_type_queue_when_it_is_not_empty();
	tearDown();
	testEnded();
	testStarted("test_11_dequeue_an_item_fron_char_type_queue_when_it_is_not_empty");
	setup();
		test_11_dequeue_an_item_fron_char_type_queue_when_it_is_not_empty();
	tearDown();
	testEnded();
	testStarted("test_12_dequeue_an_item_fron_char_type_queue_when_it_is_not_empty");
	setup();
		test_12_dequeue_an_item_fron_char_type_queue_when_it_is_not_empty();
	tearDown();
	testEnded();
	testStarted("test_13_dequeue_an_item_fron_int_type_queue_when_it_is_empty");
	setup();
		test_13_dequeue_an_item_fron_int_type_queue_when_it_is_empty();
	tearDown();
	testEnded();

	summarizeTestCount();
	fixtureTearDown();
	return 0;
}

void setup(){}

void tearDown(){}

void fixtureSetup(){}

void fixtureTearDown(){}
