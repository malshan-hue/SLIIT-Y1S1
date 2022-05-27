#include <stdio.h>

int main (void){
	
	int num1=0,num2=0,answer=0,op;
	
	printf("enter the operator: ");
	op = getchar();
	
	printf("enter first number: ");
	scanf("%d",&num1);
	
	printf("enter second number: ");
	scanf("%d",&num2);
	
	switch (op){
		
		case '+'	: 	answer = num1 + num2;
						break;
		
		case '-' 	: 	answer = num1 - num2;
						break;
						
		case '*'	: 	answer = num1 * num2;
						break;
						
		case '/'	:	answer = num1 / num2;
						break;
						
		default		: 	printf("\nInvalid operator");
						exit(0);
	}
	
	printf("\nanswer = %d",answer);
	
	return 0;
}
