#include <stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	// A, B, C, D, F
	if (score >= 90) {
		printf("%d is A\n", score);
	} else if (score >= 80 /*&& score < 90*/) {
		printf("%d is B\n", score);
	} else if (score >= 70) {
		printf("%d is C\n", score);
	} else if (score >= 60) {
		printf("%d is D\n", score);
	} else printf("%d is F\n", score);
	
	
	return 0;
}
