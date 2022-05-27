#include <stdio.h>
int main (){

    int fileNumber, userNumber;
    int check = 1;

    FILE *ptr;

    ptr = fopen("number.txt", "r");

    if (ptr == NULL){

        printf("File cannot be opened");
        return -1;
    }

    printf("enter a number: ");
    scanf("%d", &userNumber);

    while (!feof(ptr)){

        fscanf(ptr, "%d", &fileNumber);

        if (userNumber == fileNumber){
            check = 0;   
            break;      
        }

    }

    fclose(ptr);

    ptr = fopen("number.txt","a");

    if (check == 1){
        fprintf(ptr, " %d", userNumber);
    }
    else if (check == 0){
        printf("This number exist in the file.");
    }

    fclose(ptr);

    return 0;
}