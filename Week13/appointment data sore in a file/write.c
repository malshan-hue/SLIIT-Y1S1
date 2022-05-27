#include <stdio.h>
#include <string.h>
int main (){

    char name[10];
    char appType;
    int i;

    FILE *ptr;

    ptr = fopen("appointment.dat","w");

    if (ptr == NULL){

        printf("File cannot be created.");
        return -1;
    }

    for (i=0; i<5; i++){

        printf("Enter patient name: ");
        scanf("%s", name);

        printf("Enter appointment type as 'C/S/T': ");
        scanf(" %c%*c", &appType);

        printf("\n");

        fprintf(ptr, "%-10s\t%-10c\n", name,appType);
    }

    fclose(ptr);

    ptr = fopen("appointment.dat", "r");

    if (ptr == NULL){

        printf("file cannot be opened");
        return -1;
    }

    int cCount=0, sCount=0, tCount=0;

	while (fscanf(ptr, "%*s %c%*c", &appType) == 1){

        if (appType == 'C'){
            cCount ++;
        }
        else if (appType == 'S'){
            sCount++;
        }
        else if (appType == 'T'){
            tCount++;
        }
    
    }

    printf("%s\t%s\n", "Appointment Type","Number Of Patients");
    printf("%s\t%10d\n", "Consulting", cCount);
    printf("%s\t%10d\n", "Scanning", sCount);
    printf("%s\t%18d\n", "Testing", tCount);

    fclose(ptr);


    return 0;
}