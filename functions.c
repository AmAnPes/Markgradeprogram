#include "functions.h"
#include <stdio.h>

void options(int p, int n) 
{
    static int ISA1[MAX][3];
    static int ISA2[MAX][3];
    static int ISA3[MAX][3];
    static char names[MAX][50];

    switch(p) 
    {
        case 1:
            printf("\t\t\t\tOption 1: INPUT STUDENT INFO\n");
            inputinfo(ISA1, ISA2, ISA3, names, n);
            break;
        case 2:
            printf("\t\t\t\tOption 2: CHECK STUDENT INFO\n");
            printinfo(ISA1, ISA2, ISA3, names, n);
            break;
        case 3:
            printf("\t\t\t\tOption 3: GRADE CALCULATION OF STUDENT NAD GRADE PRESENTATION\n");
            calculateinfo(ISA1, ISA2, ISA3, names, n);
            break;
        default:
            printf("Invalid option\n");
            break;
    }
}

void inputinfo(int ISA1[][3], int ISA2[][3], int ISA3[][3], char names[][50], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter marks for student %d in 3 subjects in ISA1: ", i + 1);
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &ISA1[i][j]);
        }

        printf("Enter marks for student %d in 3 subjects in ISA2: ", i + 1);
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &ISA2[i][j]);
        }

        printf("Enter marks for student %d in 3 subjects in ISA3: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &ISA3[i][j]);
        }
    }
}

void printinfo(int ISA1[][3], int ISA2[][3], int ISA3[][3], char names[][50], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("\n");
        printf("Student %d Name: %s\n", i + 1, names[i]);
        printf("ISA1 Marks: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ISA1[i][j]);
        }
        printf("\n");

        printf("ISA2 Marks: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ISA2[i][j]);
        }
        printf("\n");

        printf("ISA3 Marks: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ISA3[i][j]);
        }
        printf("\n");
    }
}

void calculateinfo(int ISA1[][3], int ISA2[][3], int ISA3[][3], char names[][50], int n)

{
    for (int i = 0; i < n; i++) 
    {
        int l=0, m=0, p=0; 

        printf("Student %d Name: %s\n", i + 1, names[i]);
        
        for (int j = 0; j < 3; j++)
        {
            l=l+ISA1[i][j];
            m=m+ISA2[i][j];
            p=p+ISA3[i][j];
        }
        
        printf("Average ISA1 Marks: %d\n", l/3); 
        printf("Average ISA2 Marks: %d\n", m/3); 
        printf("Average ISA3 Marks: %d\n", p/3); 
        
        int avg = (l + m + p) / 9; 
        printf("Final grade: %d\n", avg);
    }
}
