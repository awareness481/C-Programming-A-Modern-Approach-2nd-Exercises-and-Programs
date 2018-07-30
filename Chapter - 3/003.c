#include <stdio.h>

int main(void) {
	int gsi, id, pubcode, number, digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi, &id, &pubcode, &number, &digit);

	printf("\nGSI prefix: %d\n", gsi);
	printf("Group identifier: %d\n", id);
	printf("Publisher code: %d\n", pubcode);
	printf("Item Number: %d\n", number);
	printf("Check digit: %d\n", digit);

	return 0;
}
