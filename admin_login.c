#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void admin_login()
{
    char adminID[15];
    char adminpass[12];
    printf("Enter your Admin-ID:\n");
    scanf("%s", &adminID);
    printf("Enter your password:\n");
    for (i = 0; i < 8; i++)
    {
        adminpass[i] = getch();
        printf("*");
    }
    adminpass[i] = '\0';
    if (strcmp(adminID, "Admin") == 0)
    {
        if (strcmp(adminpass, "white!23") == 0)
        {
            printf("\nWelcome.Login Success!");
        }
        else {
            printf("\nwrong password");
        }
    }
    else {
        printf("\nUser doesn't exist");
    }

}
