#include <stdio.h>

int main(void)
{
	int a,b,c;
	printf("input 3 nums : ");
	scanf("%d %d %d", &a, &b, &c);

	printf("\na=%d, b=%d, c=%d\n",a,b,c);
	
	
	int max, mid, min;
	if (a > b){
		// a,b
		max = a;
		min = b;
	} else {
		// b,a
		max = b;
		min = a;
	}
	
	if (c > max) {
		// c, max, min
		mid = max;
		max = c;
	} else if (c > min) {
		// max, c, min
		mid = c;
	} else {
		// max, min, c
		mid = min;
		min = c;
	}
	
	printf("max: %d / mid: %d / min : %d\n", max,mid,min);
	return 0;
}
