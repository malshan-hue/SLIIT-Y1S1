/* 	Name - Rathnayake W.K.G.P.M
	Student ID - IT21810350 
	Campus - Malabe
	Group - Y1.S1.WD.02.01.S1
*/

#include <stdio.h>

int main (void){
	
	int marks,count,total;	//declearing variables
	
	total = 0;	//setting the value of total to 0
	count = 1;	//set count to 1 for count module marks
	
	while (count<=4){
		
		printf("enter marks: ");
		scanf("%d",&marks);	//prompt the user to input mark
		
		total += marks;	//calculating total marks
		count++;	//postfix increment to count modules
	}
	
	printf("\ntotal marks = %d", total);	//display total mark 
	
}
