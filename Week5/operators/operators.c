#include <stdio.h>

int main (void){
	
	int num1,num2,answer,op;
	
	printf("enter the operator: ");
	op = getchar();
	
	printf("enter first number: ");
	scanf("%d",&num1);
	
	printf("enter second number: ");
	scanf("%d",&num2);
	
	if (op=='+'){
		answer = num1 + num2;	
	}
	else if (op=='-'){
		answer = num1 - num2;	
	}
	else if (op=='*'){
		answer = num1 * num2;	
	}
	else if (op=='/'){
		answer = num1 / num2;	
	}
	else{
		printf("\ninvalid operator");
		exit(0);
	}
	
	printf("\nanswer = %d",answer);
	
	return 0;
}

