#include <stdio.h>

struct item{
	
	int itemNo;
	float price;
	int quantity;
	
}item1,item2;

int main (void){
	
	printf("enter first item number: ");
	scanf("%d",&item1.itemNo);
	printf("enter first item price: ");
	scanf("%f",&item1.price);
	printf("enter first item quantity: ");
	scanf("%d",&item1.quantity);
	
	printf("\nenter second item number: ");
	scanf("%d",&item2.itemNo);
	printf("enter second item price: ");
	scanf("%f",&item2.price);
	printf("enter second item quantity: ");
	scanf("%d",&item2.quantity);
	
	printf("\nItem No\tPrice\tQuantity\n%d\t%.2f\t%d\n",item1.itemNo,item1.price,item1.quantity);
	printf("%d\t%.2f\t%d",item2.itemNo,item2.price,item2.quantity);
	
	return 0;
}
