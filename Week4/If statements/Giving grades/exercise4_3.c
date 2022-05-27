#include <stdio.h>

int main (void){
	
	int mark;
	
	printf("enter your marks: ");
	scanf("%d", &mark);
	
	if ((mark<=100) && (mark>=0)){
		if (mark >= 80){
			printf("%c", 'A');
		}
		else if (mark >= 70){
			printf("%c", 'B');
		}
		else if (mark >= 45){
			printf("%c", 'C');
		}
		else{
			printf("%c", 'F');
		} 
	}
	else{
		printf("Invalid mark");
	}
		
	
	
	
	return 0;
}

