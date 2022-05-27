#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main (){

    char palindrome[20];    //declaring the array
    int i, len; //declaring the variables
    bool check = true;  //delcaring check varialbe to true

    printf("Enter the word: "); //prompt the user to input the word
    scanf("%s", palindrome);

    len = strlen(palindrome);   //storing the length of the word that entered by the user

    for (i=0; i<len; i++){

        if (palindrome[i] != palindrome[len-i-1]){  //checking the letters of the word not equal to revers of it
            check = false;     //if so check variabl's boolean value equal to false
            break;
        }
    }

    if (check == true){ //if the letters of the word equal to revers of the word letters check variable would be true

        printf("\n%s is a palindrome.", palindrome);    //if the check variable true then the entered word is a palindrom, then display this message
    }
    else{
        printf("\n%s is not a palindrome.", palindrome);    //if check false  the is not palindrome, then this message will display
    }

    return 0;
}