#include <stdio.h>

int main(void)
{
	int num;
	printf("input num : ");
	scanf("%d", &num);
	
	// positive or zero or negative
	/*
	if (num  > 0) {
		// positive
		printf("%d is a positive num.\n", num);
	} else if (num == 0) {
			//zero
			printf("%d is a zero number.\n", num);
		} else {
			//negative
			printf("%d is a negative number\n", num);
		}
		*/

	printf("%d is a %s number\n", num, (num > 0) ? "positive" : (nub == 0) ? "zero" : "negative");
	
	
	return 0;
}
