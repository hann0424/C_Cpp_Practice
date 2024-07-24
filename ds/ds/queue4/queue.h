#ifndef QUEUE_H
#define QUEUE_H

typedef struct {
	int size;
	int *pArr;
	int front;
	int rear;
} Queue;

void push(Queue *pq, int data);
int pop(Queue *pq);

void initQueue(Queue *pq, int size);
void cleanupQueue(Queue *pq);

#endif
