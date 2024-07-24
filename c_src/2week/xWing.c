#include <stdio.h>

int main(void)
{	
	int i,j,n;
	printf("input X size : ");
	scanf("%d", &n);

	for (i=1; i<n; ++i){
		for (j=1; j<n; ++j){
			if (j==i || j==n-i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	return 0;
}
