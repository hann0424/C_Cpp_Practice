#ifndef STACK_H
#define STACK_H



typedef struct {
	//int *pArr;
	void *pArr;
	int eleSize;
	int size;
	int tos;
} Stack;

void push(Stack *ps, const void *pData);
void pop(Stack *ps, void *pRe);
void initStack(Stack *ps, int size, int eleSize);
void cleanupStack(Stack *ps);

#endif
