#include <stdio.h>

int main(void) {
	int days, month, year;

	printf("Enter a date (mm/dd/yyyy)\n");
	scanf("%d/%d/%d", &month, &days, &year);

	printf("You entered the date %d%.2d%.2d\n", year, days, month);

	return 0;	
}
