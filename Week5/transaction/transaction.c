#include <stdio.h>

int main (void){
	
	int balance,amount,transaction;
	
	printf("enter the transaction type: ");
	transaction = getchar();
	
	printf("enter the balance: ");
	scanf("%d",&balance);
	
	printf("enter the transaction amount: ");
	scanf("%d",&amount);
	
	
	if ((transaction == 'W') || (transaction == 'w')){
		
		printf("\nyou have selected to withdraw money");
		balance -=amount;
		printf("\nyour new balance is: %d",balance);
	}
	else if ((transaction == 'D') || (transaction == 'd')){
		
		printf("\nyou have selected to deposit money");
		balance +=amount;
		printf("\nyour new balance is: %d",balance);
	}
	else{
		
		printf("\nyou have selected an invalid transaction type");
	}
		
	return 0;
}
