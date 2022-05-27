/* 	Name - Rathnayake W.K.G.P.M
	Student ID - IT21810350 
	Campus - Malabe
	Group - Y1.S1.WD.02.01.S1
*/

#include <stdio.h>

int main (void){
	
	int number;	//declearing variable
	
	printf("enter number: ");	//prompt the user to enter nmber
	scanf("%d",&number);
	
	while(number>=0){	//checking number grater than to 0
		
		printf("you have entered: %d\n",number);	//printing the positive number
		
		printf("\nenter number: ");	//prompt the user to enter nmber
		scanf("%d",&number);
		
	}
	
	printf("you have entered negative number");	//printing the negative number
}
