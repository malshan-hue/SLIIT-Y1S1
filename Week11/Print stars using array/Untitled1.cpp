#include <stdio.h>
#define SIZE 5
int main (){
	
	int i , motion[SIZE] = {0};
	
	for (i=0; i<SIZE; i++){
		
		printf("enter number %d: ", i+1);
		scanf("%d",&motion[i]);
	}
	
	printf("\n");
	printf("your oder of the numbers are:\n");
	
	for (i=0; i<SIZE; i++){
		
		printf("%d\t", motion[i]);
	}
	
	for (i=0; i<SIZE+1; i++){
		
		int first , j;
		
		first = motion[0];
		
		for (j=0;j<SIZE-1; j++){
			motion[j] = motion[j+1];
		}
		motion[SIZE-1] = first;
	}
	
	printf("\n\n");
	printf("rotated order of the numbers are:\n");
	for (i = 0; i < SIZE; i++){
		
		printf("%d\t", motion[i]);
	}
	
	return 0;
}
