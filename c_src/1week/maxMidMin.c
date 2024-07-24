#include <stdio.h>

int main(void)
{
	int a,b,c;
	int max, mid, min;
	printf("input a : ");
	scanf("%d", &a);
	printf("input b : ");
	scanf("%d", &b);
	printf("input c : ");
	scanf("%d", &c);

	printf("\na=%d, b=%d, c=%d\n",a,b,c);
	
	max = a;
   	min = a;

    // 최대값 찾기
   if (b > max) {
   		max = b;
    }
   if (c > max) {
     	max = c;
    }

    // 최소값 찾기
   if (b < min) {
      	min = b;
    }
   if (c < min) {
      	min = c;
    }

    // 중앙값 찾기
   	if ((a >= b && a <= c) || (a <= b && a >= c)) {
      	mid = a;
   	} else if ((b >= a && b <= c) || (b <= a && b >= c)) {
      	mid = b;
   	} else {
      	mid = c;
    }

    // 값 출력
	printf("max: %d\n", max);
	printf("mid: %d\n", mid);
	printf("min: %d\n", min);

	return 0;
}
