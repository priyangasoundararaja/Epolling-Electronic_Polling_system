#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int candidate_details(char* province)
{
    FILE* fp;
    int n;
    char buf[1024];
    int row = 0, col = 0;
    printf("\n==========================================");
    printf("\nCANDIDATE INFORMATION");
    fp = fopen("candidate_details.csv", "r");
    if (!fp) {
        printf("Can't open file\n");
        return 0;
    }
    while (fgets(buf, 1024, fp))
    {
        col = 0;
        row++;

        if (row == 1) {
            continue;
        }
        char* field = strtok(buf, ",");
        printf("\n");
        char* string = field;
        string = strtok(NULL, ",");
        printf("\n");
        if (strcmp(field, province) == 0)
        {
            while (field)
            {
                if (col == 0) {
                    printf("Province:\t");
                }
                if (col == 1) {
                    printf("Candidate1:\t");
                    printf("%s\n", string);
                    col++;
                }
                if (col == 2) {
                    printf("Candidate2:\t");
                }
                if (col == 3) {
                    printf("Candidate3:\t");
                }
                if (col == 4) {
                    printf("Candidate4:\t");
                }
                if (col == 5) {
                    printf("Candidate5:\t");
                    printf("%s\n", field);
                    break;
                }
                if (col < 5 && col != 1) {
                    printf("%s\n", field);
                    field = strtok(NULL, ",");
                    col++;
                }
            }
            printf("\n");
            printf("\n\n\t\t\t\tPress Enter to vote...!!");
            if (getch() == 13)
                printf("\n\n\n\t\t\t\t\tENTER YOUR CHOICE: ");
            scanf("%d", &n);
            return n;

        }
    }

    fclose(fp);
    return 0;
}