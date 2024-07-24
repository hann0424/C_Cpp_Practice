#include <stdio.h>

int main(void)
{
	int i,j,n;
	printf("input num : ");
	scanf("%d", &n);
	
	for (i=1; i<=n; ++i) {
		int star_num = (i <= n/2) ? i : (n - i);  
		
		for (j=1; j<=star_num; j++) {
			printf("*");
		}
		printf("\n");
	}
	

	return 0;
}
