/* 	Name - Rathnayake W.K.G.P.M
	Student ID - IT21810350
	Campus - Malabe
	Group - Y1.S1.WD.02.01.S1
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>
double hypotenuse(double side1 , double side2);	//declaring the function with the parameters of two sides of triangle
int main (){
	
	double side1 , side2;	//declaring variables to assign triangle sides 
	
	printf("enter first side length: ");	//prompt the user to input the length of first side
	scanf("%lf",&side1);
	
	printf("enter second side length: ");	//prompt the user to input the length of second side
	scanf("%lf",&side2);
		
	assert(hypotenuse(3.0 , 4.0) == 5.00);	//assert debugging statements
	assert(hypotenuse(5.0 , 12.0) == 13.00);
	assert(hypotenuse(8.0 , 15.0) == 17.00);
	
	printf("hypotenuse of the triangle is = %.2lf", hypotenuse(side1 , side2));	//display the hypotenuseof the triangle
	
	return 0;
}

double hypotenuse(double side1 , double side2){	//implementing the finction 
	
	double hypotenuse;	//declaring a variable to assign the calculated hupotenuse of the triangle
	
	hypotenuse = sqrt(pow(side1,2) + pow(side2,2));	//calculating hypotenuse
	
	return fabs(hypotenuse);	//returning the calculated hypotenuse
}
