#include <stdio.h>

int main(void)
{
	int nums[10] = {61, 70, 80, 100, 65, 95, 93, 88, 86, 45};

	// sorting
	for (int i = 0; i < 10 - 1; ++i) {
		for (int j = i+1; j < 10; ++j) {
			if (nums[i] > nums[j]) {
				// swap
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
		}
	}
	
	for (int i = 0; i < 10; ++i) {
		printf("%d ", nums[i]);
	}
	printf("\n");	
	return 0;
}
