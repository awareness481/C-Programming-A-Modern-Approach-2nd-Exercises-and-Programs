#include <stdio.h>

int main(void) {
	#define TAX 0.05f
	float usd;

	printf("Enter an amount in US dollars: \n");
	scanf("%f", &usd);

	printf("The amount in total with tax added is $%.2f\n", usd + (usd * TAX));
	return 0;
}
