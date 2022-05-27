/* 	Name - Rathnayake W.K.G.P.M
	Student ID - IT21810350 
	Campus - Malabe
	Group - Y1.S1.WD.02.01.S1
*/

#include <stdio.h>

int main (void){
	
	int x,y;	//declearing variables
	
	for (x=1;x<=7;x++){	//printing 7 rows in outterloop
		for(y=1;y<=x;++y){
			printf("*");	//printing star 1 to the value of x
		}
		printf("\n");	//move ti the next line
	}
	for (x=6;x>=1;x--){	//printing other inverted right triangle
		for(y=1;y<=x;y++){
			printf("*");	//printing * 1 to the value of x
		}
		printf("\n");	//moving next line
	}
}
