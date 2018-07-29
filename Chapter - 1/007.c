#include <stdio.h>

int main(void) {
	int usd;

	printf("Enter an amount in US Dollars: \n");
	scanf("%d", &usd);

	printf("$20 bills: %d\n", usd / 20);
	usd = usd - (usd / 20) * 20;
	printf("$10 bills: %d\n", usd / 10);
	usd = usd - (usd / 10) * 10;
	printf("$5 bills: %d\n", usd / 5);
	usd = usd - (usd / 5) * 5;
	printf("$1 bills: %d\n", usd / 1);
	
	return 0;
}
