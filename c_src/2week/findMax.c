#include <stdio.h>

int main(void)
{
	//int num = 10;		initialization list
	int nums[10] = {61, 700, 80, 150, 65, 95, 93, 88, 86, 45};

	int i;
	int max = 0;
	
	for (i=0; i<10; ++i){
	 	if (max < nums[i]) max = nums[i];
	}
	
	
	printf("max : %d\n", max);
	return 0;
}
