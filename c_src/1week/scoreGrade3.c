#include <stdio.h>

int main(void)
{
	int score;
	char grade;
	printf("input score : ");
	scanf("%d", &score);
	
	
	switch (score/10) {
	case 10:
		grade = 'A';
		break;
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default: // 5,4,3,2,1,0
		grade = 'F';	
		break;			
	}
	
	
	printf("score: %d --- grade: %c\n", score, grade);	
	
	
	return 0;
}
