#include <stdio.h>

int gcd(int a, int b)
{
	int result;
	int min;
	
	if ( a > b ) {
		min = a;
	} else {
		min = b;
	}
	
	for (int i = 1; i <= min; ++i) {
		if (a % i == 0 && b % i == 0) {
			result = i;
		}
	}
	
	return result;
}
