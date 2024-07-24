#include <stdio.h>

int main(void)
{
	int num;
	printf("input num : ");
	scanf("%d", &num);
	
	/*
	if (num % 2 == 1) {
		// odd
		printf("%d is odd number.\n", num);
	} else {
		// even
		printf("%d is even number.\n", num);
	}
	*/
	printf("%d is a %s number\n", num, (num % 2) ? "odd" : "even");
	return 0;
}
