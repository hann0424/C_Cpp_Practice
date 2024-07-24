#include <stdio.h>
#include <stdlib.h>   // malloc() free()

int main(void)
{
	int size;
	printf("input size : ");
	scanf("%d", &size);
	
	//int nums[size];
	int *pArr = malloc(sizeof(int) * size);  // Heap 

	for (int i = 0; i < size; ++i) {
		//nums[i] = i + 1;
		pArr[i] = i + 1;
	}
	
	for (int i = 0; i < size; ++i) {
		//printf("%d ", nums[i]);
		printf("%d ", pArr[i]);
	}
	printf("\n");
	
	free(pArr); // area close
	return 0;
}
