#include <stdio.h>
int main (){

    int sales[4][5];    //declaring the array
    int i, j, totalSales=0; //declaring variables

    for (i=0; i<4; i++){

        for (j=0; j<5; j++){

            printf("Enter amount of salesperson %d's product %d's that sold: ", i+1, j+1);  //storing values to the declared array
            scanf("%d", &sales[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<4; i++){

        for (j=0; j<5; j++){

            totalSales += sales[i][j];  //calculating stored values 
        }
    }

    printf("\ntotal sales for the day is %d.", totalSales); //displaying summation of stored values in the array

    return 0;
}