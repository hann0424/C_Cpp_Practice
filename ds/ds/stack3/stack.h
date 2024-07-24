#ifndef STACK_H
#define STACK_H

#define ARRSIZE 100

typedef struct {
	int array[ARRSIZE];
	int tos;
} Stack;

void push(Stack *ps, int data);
int pop(Stack *ps);
void initStack(Stack *ps);

#endif
