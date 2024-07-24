#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("=== BASE BALL GAME ===\n");
	printf("*command 1 1 1 -> game close\n");
	srand(time(NULL));		// seed
	
	// random num [1,9] -> question[] unique!
	int question[3];
	for (int i=0; i<3; ++i) {
		question[i] = rand() % 9 + 1; // 1~9
	
		// unique check
		while ((i > 0 && question[i] == question[i-1]) || (i > 1 && question[i] == question[i-2])) {
			question[i] = rand() % 9 + 1; // 1~9
		}
	}
	
	
	for (int i=0; i<3; ++i) {
		printf("%d, ",question[i]);
	}
	printf("\n\n");
	
	
	//game prof.ver
	/*
	for (int i=0; i<3; ++i) {
		for (int j=0; j<3; ++j){
			if (question[i]==answer[j]){
				//ball or strike
				if (i == j) {
					++strike;
				} else {
					++ball;
				}
			}
		}
	}
	*/
	
	// game my.ver
	int count = 0;
	while (1) {
		++count;
		int strike = 0, ball = 0;
	
		// user answer
		int answer[3];
		printf("input answer : ");
		scanf("%d %d %d",&answer[0],&answer[1],&answer[2]);
		/*
		int answer[3];
		for (int i=0; i<3; ++i) {
			printf("input %d num : ",i+1);
			scanf("%d", &answer[i]);
		}
		*/
		
		/*
		for (int i=0; i<3; ++i) {
			printf("%d\n",answer[i]);
		}
		*/
		
		// check 
		for (int i=0; i<3; ++i) {
			// #strike check
			if (answer[i] == question[i]) ++strike;
			
			// #ball check
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
