#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("=== BASE BALL GAME ===\n");
	printf("*command 1 1 1 -> game close\n");
	srand(time(NULL));		
	
	int question[3];
	for (int i=0; i<3; ++i) {
		question[i] = rand() % 9 + 1; 
	
		while ((i > 0 && question[i] == question[i-1]) || (i > 1 && question[i] == question[i-2])) {
			question[i] = rand() % 9 + 1; 
		}
	}
	
	
	for (int i=0; i<3; ++i) {
		printf("%d, ",question[i]);
	}
	printf("\n\n");
	
	
	int count = 0;
	while (1) {
		++count;
		int strike = 0, ball = 0;
	
		int answer[3];
		printf("input answer : ");
		scanf("%d %d %d",&answer[0],&answer[1],&answer[2]);
		
		for (int i=0; i<3; ++i) {
			if (answer[i] == question[i]) ++strike;
			
			for (int j=0; j<3; ++j) {
				if (answer[i] != question[i] && answer[i] == question[j]) ++ball;
			}
		}
		
		printf("\n=========================================\n");
		printf("#strike : %d,	#ball : %d  --- count : %d\n",strike,ball,count);
		printf("=========================================\n");
		
		if (strike == 3) break;
		if (answer[0] == 1 && answer[1] == 1 && answer[2] == 1) break;
	}
	
	printf("\nCongraturation! Your answer is collect!\n");
	printf("Your count = %d\n\n", count);
	printf("Game stoped..\n");
	return 0;
}
