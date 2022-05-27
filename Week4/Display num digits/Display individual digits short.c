#include <stdio.h>

int main (void){
	
	int number,x1,x2,x3,x4,x5;
	
	printf("%s", "enter five digit number: ");
	scanf("%d", &number);
	
	x1 = number%10;
	x2 = (number/10)%10;
	x3 = (number/100)%10;
	x4 = (number/1000)%10;
	x5 = (number/10000)%10;
	
	printf("%d\t%d\t%d\t%d\t%d", x5,x4,x3,x2,x1);
	
	return 0;
}
