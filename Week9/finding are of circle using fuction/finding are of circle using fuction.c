/* 	Name - Rathnayake W.K.G.P.M
	Student ID - IT21810350
	Campus - Malabe
	Group - Y1.S1.WD.02.01.S1
*/

#include <stdio.h>

float circleArea(float radius); //declaring the function

int main ()
{
	
	float radius;
	
	printf("enter radious of the circle: ");	//prompt the user to input radius
	scanf("%f",&radius);
	
	printf("Area of the cirle is = %.2f", circleArea(radius));	//printing the calculated area
	return 0;
}

float circleArea(float radius)	//implementing the function
{
	return (float)22/7*radius*radius;
}


