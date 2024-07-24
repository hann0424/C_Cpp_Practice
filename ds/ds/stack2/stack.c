static int stack[100];
static int tos;			// top of stack > tos

void push(int data)
{
	stack[tos] = data;
	++tos;
}

int pop(void)
{
	--tos;
	return stack[tos];
}
