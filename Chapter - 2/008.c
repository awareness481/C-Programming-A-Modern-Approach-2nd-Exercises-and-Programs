#include <stdio.h>

int main(void) {
	float loan;
	float interest;
	float monthly;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");	
	scanf("%f", &interest);
	printf("Enter montly monthly: ");
	scanf("%f", &monthly);

	interest = interest / 1200.0f;
	
	loan = loan - monthly + loan * interest;
	printf("Balance after first payment: %.2f\n", loan);
	loan = loan - monthly + loan * interest;
	printf("Balance after third payment: %.2f\n", loan);
	loan = loan - monthly + loan * interest;
	printf("Balance after third payment: %.2f\n", loan);

	return 0;
}
