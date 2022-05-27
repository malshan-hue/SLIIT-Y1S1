#include <stdio.h>
int main (void){
	
	int marks[10];
	int i;
	
	for (i=0; i<10; i++){
		
		printf("input student %d's marks: ", i+1);
		scanf("%d",&marks[i]);
	}
	
	return 0;
}
