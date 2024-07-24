#include <stdio.h>

int main(void)
{
	//int num = 10;		initialization list
	int nums[10] = {61, 70, 80, 100, 65, 95, 93, 88, 86, 45};

	int sum = 0;
	
	for (int i=0; i<10; ++i) {
		sum = sum + nums[i];
	
	}

	printf("sum : %d\n", sum);

	return 0;
}
