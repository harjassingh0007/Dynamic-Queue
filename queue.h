typedef struct
{
	void* starting_address;
	int each_size;
	int total_elements;
	int rear;
	int front;
}Queue;

Queue* createQueue(int size, int totalElements);
int enqueue(Queue* queue, void* element);
void *dequeue(Queue* queue);