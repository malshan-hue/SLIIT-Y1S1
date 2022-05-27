/* 	Name - Rathnayake W.K.G.P.M
	Student ID - IT21810350 
	Campus - Malabe
	Group - Y1.S1.WD.02.01.S1
*/

#include <stdio.h>

int main (void){
	
	int number,sum=0,count;	//declearing the variables
	float average;
	
	
	while(number>=0){	//cheking the number greater thean to 0
		
		sum += number;	//calculating the sum of given numbers
		++count;	//counting the entered numbers
		
		printf("enter number: ");	//prompt the user to input numbers
		scanf("%d",&number);
		
	}
	
	average = (float)sum/count;	//calculating the average
	printf("\nsum = %d\naverage = %.2f",sum,average);	//printing calculated sum and average 
	
}

