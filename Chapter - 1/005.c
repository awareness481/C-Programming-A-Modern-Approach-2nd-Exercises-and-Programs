#include <stdio.h>

int main(void) {
	int x;

	printf("Enter a value for x in: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	scanf("%d", &x);
	
	int result = 3 * ( x * x * x * x * x );
	result += 2 * ( x * x * x * x);
	result -= 5 * ( x * x * x);
	result -= x * x;
	result += 7 * x - 6;	
	printf("Computed Polynomial is: %d\n", result);

	return 0;	
}
