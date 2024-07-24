#include <stdio.h>

int main(void)
{
	int a,b,c;
	int max, mid, min;
	printf("input 3 nums : ");
	scanf("%d %d %d", &a, &b, &c);

	printf("\na=%d, b=%d, c=%d\n",a,b,c);
	
	if (a > b){
		// a,b
		if (c > a) {
			printf("max: %d / mid: %d / min : %d\n", c,a,b);
		} else if (c > b) {
			printf("max: %d / mid: %d / min : %d\n", a,c,b);
		} else {
			printf("max: %d / mid: %d / min : %d\n", a,b,c);
		}
	} else {
		// b,a
		if (c > b) {
			printf("max: %d / mid: %d / min : %d\n", c,b,a);
		} else if (c > a) {
			printf("max: %d / mid: %d / min : %d\n", b,c,a);
		} else {
			printf("max: %d / mid: %d / min : %d\n", b,a,c);
		}

    /* 값 출력
	printf("max: %d\n", max);
	printf("mid: %d\n", mid);
	printf("min: %d\n", min);
	*/
	}
	
	return 0;
}
