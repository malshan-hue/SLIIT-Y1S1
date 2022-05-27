#include <stdio.h>
int main (void){
	
	int marks[10];
	int i , mark;
	
	for (i=0; i<10; i++){
		
		printf("input student %d's marks: ", i+1);
		scanf("%d",&mark);
		
		if ((mark >= 0) && (mark <= 20)){
			marks[i] = mark;
		}
	
	}
	
	return 0;
}
