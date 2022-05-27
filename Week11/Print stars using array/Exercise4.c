#include <stdio.h>
#define SIZE 10
int main (){
	
	int array[SIZE] = {0};
	int i;
	
	for (i=0; i<SIZE; i++){
		printf("enter number %d: ", i+1);
		scanf("%d",&array[i]);
	}
	
	printf("\n");
	printf("%s\t%s\t%s\n","Element" , "Value" , "Histogram");
	
	for (i=0; i<SIZE; i++){
		
		printf("%d\t%d\t", i+1 , array[i]);
		int j;
	
		for (j=0; j<array[i]; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
