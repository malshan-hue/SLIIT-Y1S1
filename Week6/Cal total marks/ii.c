/* 	Name - Rathnayake W.K.G.P.M
	Student ID - IT21810350 
	Campus - Malabe
	Group - Y1.S1.WD.02.01.S1
*/

#include <stdio.h>

int main (void){
	
	int marks,count,total,st_count;	//declearing variables
	
	st_count = 1;	//set st_count to 1 for count student
	
	while (st_count<=3){	//counting student
		
		printf("enter student%d marks: \n", st_count);
		
		total = 0;	//setting the value of total to 0
		count = 1;	//set count to 1 for count module marks
			while (count<=4){	//counting moduls
		
				printf("enter marks: ");
				scanf("%d",&marks);	//prompt the user to input mark
		
				total+= marks;	//calculating total marks
				count++;	//postfix increment to count modules
			}
		
	printf("total marks of student%d = %d\n\n",st_count,total);	//display total mark for each student
	st_count++;	//postfix increment to count students
	
	}
	
}

