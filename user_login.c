#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int ulogin()
{
    char username[15];
    char password[12];
    FILE* fp;
    fp = fopen("auth.csv", "r");

    printf("Enter your username:\n");
    scanf("%s", &username);

    printf("Enter your password:\n");
    // scanf("%s", &password);
    for (i = 0; i < 6; i++)
    {
        password[i] = getch();
        printf("*");
    }
    password[i] = '\0';

    char string[1024];
    char* token, * field;
    int row_count = 0;
    int field_count = 0, flag = 0;
    if (!fp) {
        printf("Can't open file\n");
        return 0;
    }
    while (fgets(string, 1024, fp))
    {
        field_count = 0;
        row_count++;
        if (row_count == 1)
        {
            continue;
        }
        field = strtok(string, ",");
        if (strcmp(field, username) == 0)
        {
            field = strtok(NULL, ",");
            if (strcmp(field, password) == 0)
            {
                while (field) {
                    //printf("%s", field);
                    flag++;
                    field_count++;
                    break;
                }
            }
        }
    }
    if (flag == 0)
    {
        printf("\nStatus:Invalid login");
        printf("\n");
    }
    else
    {
        printf("\nStatus:Successful Login");
        printf("\n");
        //printf("%s", username);
        userdetails(username);
    }
    fclose(fp);
    return 0;
}