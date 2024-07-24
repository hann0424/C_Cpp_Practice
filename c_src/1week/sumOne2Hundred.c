#include <stdio.h>

int main(void)
{
	int sum = 0;
	int i;
	i = 1;
	while (i <= 100){
		sum = sum + i;
		++i;
		//printf("%d\n", sum);
		
	/*	loop spread
		while (i <= 100) {
			sum = sum + i + i + 1;
			i = i + 2;
	 */
	}
	
	printf("sum[1, 100] --- result : %d\n", sum);
	return 0;
}
