#include <stdio.h>

int main(void) {
	int x;

	printf("Enter a value for x in: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	scanf("%d", &x);
	printf("Result will be computed using Horner's rule\n");
	
	// (((( 3x + 2)x - 5)x - 1)x + 7)x - 6
	int result = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

	printf("Computed Polynomial is: %d\n", result);

	return 0;	
}
