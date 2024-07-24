#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum;
	
	while (i <= 100) {
		sum = i + sum;
		
		if (i != 0 && sum % 3 == 0) {
			printf("%d --- O\n",sum);
		} else printf("%d --- X\n",sum);
	
	/*printf("%d --- %s",i ,(i%3==0) ? "O" : "X");*/
	
		++i;
	}
	return 0;
}
