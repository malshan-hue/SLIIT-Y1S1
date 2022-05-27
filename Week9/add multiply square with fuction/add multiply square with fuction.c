/* 	Name - Rathnayake W.K.G.P.M
	Student ID - IT21810350
	Campus - Malabe
	Group - Y1.S1.WD.02.01.S1
*/

#include <stdio.h>

int add(int a , int b);	//declaring the function
int multiply( int a , int b);
int square(int a);

int main()
{
	printf("%d",square(add(multiply(3,4),multiply(5,7)))); //displaying the answer of the expression
	
	return 0;
}

int add(int a , int b)	//implementing the add function
{
	return a + b;
}

int multiply(int a , int b)	//implementing the multiply function
{
	return a * b;
}

int square(int a)	//implementing the square function
{
	return a*a;
}

