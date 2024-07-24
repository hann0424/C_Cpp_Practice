#include <stdio.h>

int main(void)
{
	int frameScore[11] = {0};
	int totalScore = 0;
	int frame = 1;
	
	// 1 ~ 9 frame
	int score[10][3] = {0};
	while (frame < 10) {
		printf("============= Frame %d =============\n", frame);
		
		printf("Enter the score for first cast : ");
		scanf("%d", &score[frame][1]);
		// scanf() --> first cast score
		
		//frame score calculate..
		if (score[frame][1] == 10) {
			printf("\n*** Strike !!! ***\n");
			score[frame][2] = 0;
		} else {
			printf("Enter the score for second cast : ");
			scanf("%d", &score[frame][2]);
			
			if (score[frame][1] + score[frame][2] == 10) {
				printf("\n * * Spare !!! * *\n ");
			}
		}
		
		frameScore[frame] = score[frame][1] + score[frame][2];
		
		if (score[frame][1] == 10 && frame < 9) {
			frameScore[frame] += score[frame + 1][1] + score[frame+1][2];
		}
		
		else if (score[frame][1] + score[frame][2] == 10 && frame < 9) {
			frameScore[frame] += score[frame+1][1];
		}
		
		
		
		//printf frameScore
		printf("\n[  Frame : %d || scores : %d, %d  ]\n", frame, score[frame][1], score[frame][2]);
		
		printf("[	   Total Score : %d           ]\n\n\n\n\n",totalScore);
		
		totalScore += frameScore[frame];
		++frame;
	}
	
	
	// 10 frame
	int score10[4] = {0};
	
	printf("============= Frame %d =============\n", frame);
	printf("Enter the score for first cast : ");
	scanf("%d", &score10[1]);
	
	if ( /* i >= 2 && */score[9][1] + score[9][2] == 10 && score[9][1] != 10) {
		int bonus = score10[1];
		frameScore[9] = frameScore[8] + 10 + bonus;
		
		printf("%d frame score : %d\n", 9, frameScore[9]);
	}
	
	if (/* i >= 3 && */score[8][1] == 10 && score[9][1]) {
		int bonus = score[9][1] + score10[1];
		frameScore[8] = frameScore[7] + 10 + bonus;
		
		printf("%d frame score : %d\n", 8, frameScore[9]);
	}
	
	printf("============= Frame %d =============\n", frame);
	printf("Enter the score for second cast : ");
	scanf("%d", &score10[2]);
	
	if (/* i >= 2 && */score[9][1] == 10 ){
		int bonus = score10[1] + score10[2];
		frameScore[9] = frameScore[8] + 10 + bonus;
		
		printf("%d frame score : %d\n", 9, frameScore[9]);
	}
	
	if (score10[1] + score10[2] < 10) {
		frameScore[10] = frameScore[9] + score10[1] + score10[2];
		
		printf("%d frame score : %d\n", 10, frameScore[10]);
	} else {
		printf("============= Frame %d =============\n", frame);
		printf("Enter the score for tirth cast : ");
		scanf("%d", &score10[3]);
		
		frameScore[10] = frameScore[9] + score10[1] + score10[2] + score10[3];
		printf("%d frame score : %d\n", 10, frameScore[10]);
	}
	return 0;
}
