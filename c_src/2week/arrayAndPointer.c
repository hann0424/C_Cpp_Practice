#include <stdio.h>

int main(void)
{
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p;
	
	p = nums;  // p = &nums[0] == 1
	printf("*p : %d\n", *p); // == 1
	
	++p; 		// p = p + 1 ---> 2
	printf("*p : %d\n", *p); // == 2
	
	p = nums;
	for (int i = 0; i<10; ++i) {
		printf("*(p + %d) : %d\n" , i, *(p + i));
	}
	
	return 0;
}
