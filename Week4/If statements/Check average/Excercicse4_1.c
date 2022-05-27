#include <stdio.h>

int main (void){
	
	int module1,module2,total,average;
	
	printf("enter first module marks: ");
	scanf("%d", &module1);
	printf("enter second module marks: ");
	scanf("%d", &module2);
	
	total = module1+module2;
	average = total/2;
	
	if (average >45)
		printf("\npass");
	else
		printf("\nfail");
	
	return 0;
}
