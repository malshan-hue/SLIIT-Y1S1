#include <stdio.h>
int main (void){
	
	int marks[10] = {0};
	int i , mark;
	
	for (i=0; i<10; i++){
		
		printf("input student %d's marks: ", i+1);
		scanf("%d",&mark);
		
		if ((mark >= 0) && (mark <= 20)){
			marks[i] = mark;
		}
	
	}
	
	printf("\n");
	
	for (i=0; i<10; i++){
		
		if (marks[i] != 0){
			printf("student %d's mark is = %d\n", i+1 , marks[i]);
		}
	}
	
	return 0;
}
