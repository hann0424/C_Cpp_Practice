#include <stdio.h>

int main(void)
{
	int nums[] = {50, 60, 10, 20, 160, 90, 30, 40, 70, 80};
	int max = 0;

	
	for (int i = 0; i < 10; ++i) {
		printf("%d ", nums[i]);
		if (nums[i] > max) {
			max = nums[i];
		}
	}
	printf("\nmax num : %d\n", max);
	return 0;
}




/*
int main(void)
{
	int k = 0;
	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= 2 * i - 1; ++j) {
			printf("*");
			k++;
		}
	printf("\n");
	}

	return 0;
}
*/


/*
int main(void)
{
	int i = 0;
	int sum = 0;
	while(1){
		sum += i;
		++i;
		printf("%d ", i);
		
		if ( i == 10 ){
			break;
		}
	}
	printf("\nsum : %d\n", sum);
	return 0;
}
*/



/* exam 5
int main(void)
{
	char ch;
	scanf("%c", &ch);
	
	if ( ch >= 'A' && ch <= 'Z') {
		printf("big letter\n");
	} else {
		printf("small letter\n");
	}
	return 0;
}
*/


/* exam3
int main(void)
{
	int numOfMan, numOfWoman;
	double manRatio, womanRatio;
	scanf("%d %d", &numOfMan, &numOfWoman);

	manRatio = numOfMan / (numOfMan + numOfWoman) * 100;
	womanRatio = numOfWoman / (numOfMan + numOfWoman) * 100;

	printf("%.2f %.2f\n", manRatio, womanRatio);
	return 0;
}
*/
