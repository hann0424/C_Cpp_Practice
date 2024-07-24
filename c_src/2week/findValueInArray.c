#include <stdio.h>

int main(void)
{
	//int num = 10;		initialization list
	int nums[10] = {61, 70, 80, 100, 65, 95, 93, 88, 86, 45};

	int i;
	int num;
	printf("input num : ");
	scanf("%d", &num);
	
	for (i = 0; i<10; ++i) {
		if (num == nums[i]) break;
	}
	
	if (i < 10) 	printf("%d is found. index:%d\n",num,i);
	else 			printf("%d is not found.\n",num);
	
	return 0;
}
