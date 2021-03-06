#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h>

// A structure to represent a queue 
struct Queue 
{ 
    int front, rear, size; 
    unsigned capacity; 
    int* array; 
};

#define A 400

struct Queue* createQueue(unsigned capacity);
int isFull(struct Queue* queue); 
int isEmpty(struct Queue* queue);
void enqueue(struct Queue* queue, int item);
int dequeue(struct Queue* queue);
int front(struct Queue* queue);
int rear(struct Queue* queue);
void init_queue(struct Queue* queue, int size);
void free_queue(struct Queue*);






