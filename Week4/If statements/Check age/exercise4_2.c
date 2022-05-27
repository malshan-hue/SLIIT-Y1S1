#include <stdio.h>

int main (void){
	
	int age;
	char gender;
	
	printf("enter your age: ");
	scanf("%d", &age);
	printf("enter your gender (M or F): ");
	scanf(" %c", &gender);

	if (age>=65)
	{
		if ((gender == 'm') || (gender == 'M'))
			printf("%s","\nSeniorMale");
		else 
			printf("%s","\nSeniorFemale");
	}
	else
	{
		printf("%s","\nNotSeniorCitizen");
	}
	
	return 0;
}


