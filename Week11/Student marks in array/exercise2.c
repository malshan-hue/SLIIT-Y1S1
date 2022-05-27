#include <stdio.h>
#define SIZE 10
int main (void){
	
	int marks[SIZE] = {0};
	int i , mark , sum=0 , count=0;
	float mean=0;
	
	for (i=0; i<SIZE; i++){
		
		printf("input student %d's marks: ", i+1);
		scanf("%d",&mark);
		
		if ((mark >= 0) && (mark <= 20)){
			
			marks[i] = mark;	
			sum += marks[i];
			count++;
			}
	}
	
	printf("\n");
	
	for (i=0; i<SIZE; i++){
		
		if (marks[i] != 0){
			printf("student %d's mark is = %d\n", i+1 , marks[i]);
		}
	}
	
	mean = sum / (float)count;
	
	printf("\nsum=%d count=%d\n", sum , count);
	printf("mean of the marks is = %.2f", mean);
	
	return 0;
}
