#include <stdio.h>

int main(void) {
	#define PI 3.14
	
	float R;
   	scanf("%f", &R); 
	float volume = 4.0f/3.0f * PI * R * R * R;
	printf("radius: %.1f\n", volume);  
	return 0;
}
