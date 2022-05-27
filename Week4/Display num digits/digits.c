//Write Program to display the digits separatly
#include <stdio.h>
int main(void)
{
//variable declaration
	int num ;
	int firD,secD,thiD,fouD,fifD;
	//input
	printf("Enter five digit number :");
	scanf("%d",&num);
//calculation
	firD = num/10000;
	secD = (num%10000)/1000;
	thiD = (num%1000)/100;
	fouD = (num%100)/10;
	fifD = num%10;
//display
	printf("%d\t %d\t %d\t %d\t %d",firD,secD,thiD,fouD,fifD);
	return 0;
}
