#include <stdio.h>

int main(void) 
{
	int n[] = {5,4,3,2,1};
	
	for (int i=0; i<5; ++i) {
		printf("i=%d, n=%d\n",i,(i+1)%5);
		printf("%d\n", n[(i+1)%5]);
	}
	
	printf("\n");
	return 0;
}
