#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void push(Stack *ps, const void *pData)
{

	assert(ps->tos != ps->size);
	
	
	//ps->pArr[ps->tos] = data;
	//memcpy(&ps->pArr[ps->tos], pData, ps->eleSize);
	memcpy( (unsigned char *)ps->pArr + ps->tos * ps->eleSize, pData, ps->eleSize);
	++ps->tos;
}

void pop(Stack *ps, void *pRe)
{
	assert(ps->tos != 0);
	
	--ps->tos;
	//*pRe = ps->pArr[ps->tos];
	//memcpy(pRe, &ps->pArr[ps->tos], ps->eleSize);
	memcpy(pRe, (unsigned char *)ps->pArr + ps->tos * ps->eleSize, ps->eleSize);
}

void initStack(Stack *ps, int size, int eleSize)
{
	ps->tos = 0;
	ps->eleSize = 
	ps->eleSize = eleSize;
	ps->pArr = malloc(eleSize * size);
	assert(ps->pArr);
}

void cleanupStack(Stack *ps)
{
	free(ps->pArr);
}
