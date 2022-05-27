#include <stdio.h>

int main (void){
	
	int number;
	
	printf("%s", "enter 5 digit number: ");
	scanf("%d", &number);
	
	printf("\n%d ", number/10000);
	number = number - ((number/10000)*10000);

	printf("%d ", number/1000);
	number = number - ((number/1000)*1000);	
	
	printf("%d ", number/100);
	number = number - ((number/100)*100);
	
	printf("%d ", number/10);
	number = number - ((number/10)*10);	
	
	printf("%d\n", (number%10));
	
	return 0;
}
