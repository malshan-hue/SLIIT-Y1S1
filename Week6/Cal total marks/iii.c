/* 	Name - Rathnayake W.K.G.P.M
	Student ID - IT21810350 
	Campus - Malabe
	Group - Y1.S1.WD.02.01.S1
*/

#include <stdio.h>

int main (void){
	
	int marks,count,total,st_count,highest_n;  //declaring valriables
	
	st_count = 1;	
	highest_n = 0;	
		
	while (st_count<=3){	//counting 3 student
		
		printf("enter student%d marks: \n", st_count);	
		
		total = 0;
		count = 1;
			while (count<=4){	//counting 4 modules
		
				printf("enter marks: ");
				scanf("%d",&marks);		//prompt the user to input marks
		
				total += marks;	//calculating total
				count++;	//postfix increment for counting modules
			}
		
		if (highest_n<total){	//cheking the highest mark
			
			highest_n = total;	//storing the highest value
		}
		
	printf("total marks of student%d = %d\n\n",st_count,total);		//display totoal marks for each student
	st_count++;	//postfix increment for counting students
	
	}
	
	printf("highest total mark is = %d", highest_n);	//display highest mark
	
}

