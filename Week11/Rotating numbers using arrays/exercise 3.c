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
	
	for (i=0; i<SIZE-1; i++){
		
		int last , j;
		
		last = motion[SIZE-1];
		
		for (j=SIZE-1; j>0; j--){
			motion[j] = motion[j-1];
		}
		motion[0] = last;
	}
	
	printf("\n\n");
	printf("rotated order of the numbers are:\n");
	for (i = 0; i < SIZE; i++){
		
		printf("%d\t", motion[i]);
	}
	
	return 0;
}
