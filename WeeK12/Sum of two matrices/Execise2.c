#include <stdio.h>
int main (){

    int a[4][4] = {{5,7,8,10},{9,3,0,6},{8,1,9,2},{4,7,2,1}}; //declaring arrays
    int b[4][4] = {{2,2,1,3},{8,1,3,1},{1,2,2,4},{3,1,1,2}};
    int answer[4][4];
    int i,j;    //delcaring variables

    for (i=0; i<4; i++){    //perform row eliments in outter loop

        for (j=0; j<4; j++){    //perform column eliments in inner loop

            answer[i][j] = a[i][j] + b[i][j];   //will get summation of eliments on a and b arrys and assign them to an array called answer
        }
    }

    for (i=0; i<4; i++){    //will display row eliments

        for (j=0; j<4; j++){    //will display column eliments

            printf("%d\t", answer[i][j]);   //display the eliments as in the loop
        }

        printf("\n");
    }

    return 0;
}