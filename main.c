#include <stdio.h>
#include "functions.h"

int main() {
    int n;
    printf("Enter the number of students you want to enter : ");
    scanf("%d", &n);

    int f = 1;
    do 
    {   
        printf("**************************************************************************************\n");
        printf("\t\t\t\t\t\tMENU\n");
        printf("\t\t\t\tOption 1: INPUT STUDENT INFO\n");
        printf("\t\t\t\tOption 2: CHECK STUDENT INFO\n");
        printf("\t\t\t\tOption 3: GRADE CALCULATION AND DISPLAYING OF MARKS\n");
        printf("**************************************************************************************\n");
        int o;
        printf("Enter your choice: ");
        scanf("%d", &o);
        options(o, n);
        printf("--------------------------------------------------------------------------------------\n");
        printf("Enter 1 to go to menu and 0 to exit: ");
        scanf("%d", &f);
    } while (f != 0);

    return 0;
}