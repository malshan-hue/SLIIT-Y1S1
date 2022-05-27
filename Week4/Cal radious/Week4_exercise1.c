#include <stdio.h>

float pi=3.14;

int main (vooid){
	
	float r,diameter,circumference,area;
	
		printf("enter radius of the circle: ");
		scanf("%f", &r);
		
		diameter = 2*r;
		circumference = 2*pi*r;
		area = pi*r*r;
		
		printf("\ndiameter = %.2f\n", diameter );
		printf("circumference = %.2f\n", circumference );
		printf("area = %.2f\n", area );
	
	return 0;
}
