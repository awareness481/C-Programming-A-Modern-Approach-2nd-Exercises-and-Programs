#include <stdio.h>

int main(void) {
	#define PI 3.14
	#define R 10.0

	float radius = 4.0f/3.0f * PI * R * R * R;
	printf("radius: %.1f\n", radius);  
	return 0;
}
