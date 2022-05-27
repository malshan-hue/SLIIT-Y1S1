#include <stdio.h>

int main (void){
	
	int number;
	
	printf("enter your number: ");
	scanf("%d",&number);
	
	if (number<0){
		
		printf("\n%s\n","number is negative and converted to positive");
		printf("%d",number*-1);
	
	}
		
	else{
		
		printf("\n%s\n", "number is positive");
		printf("%d",number);
		
	}
		
	return 0;
}

