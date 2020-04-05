#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int cast_vote(int choice,char* province)
{
    FILE* fp;
    char buf[1024];
    int row = 0, col = 0;
    int a=0, b=0, c=0, d=0, e = 0;
    int f = 0, g = 0, h = 0, i = 0, j = 0;
    int k = 0, l = 0, m = 0, n = 0, o = 0;
    int p = 0, q = 0, r = 0, s = 0, t = 0;
//    tot =  candidate_details();
//printf("\nYou chose to vote for candidate no:", choice);

fp = fopen("candidate_details.csv", "r+");
if (!fp) {
    printf("\nCan't open file\n");
    return 0;
}
//while (fgets(buf, 1024, fp))
//{

    if (province == "Ontario")
    {
        switch (choice)
        {
        case 1:
            a++;
            printf("\nYou voted for Tim");
            //code to update col 6 & row 1
            break;

        case 2:
            b++;
            printf("\nYou voted for Smith");
            //code to update col 7 & row 1
            break;

        case 3:
            c++;
            printf("\nYou voted for Peter");
            //code to update col 8 & row 1
            break;

        case 4:
            d++;
            printf("\nYou voted for Bryan");
            //code to update col 9 & row 1
            break;

        case 5:
            e++;
            printf("\nYou voted for Jim");
            //code to update col 10 & row 1
            break;


        }

    }

    else if (province == "Quebec")
    {

        switch (choice)
        {
        case 1:
            f++;
            printf("\nYou voted for Emma");
            //code to update col 6 & row 2
            break;



        case 2:
            g++;
            printf("\nYou voted for James");
            //code to update col 7 & row 2
            break;


        case 3:
            h++;
            printf("\nYou voted for Mekayl");
            //code to update col 8 & row 2
            break;


        case 4:
            i++;
            printf("\nYou voted for Karyn");
            //code to update col 9 & row 2
            break;


        case 5:
            j++;
            printf("\nYou voted for Trent");
            //code to update col 10 & row 2
            break;


        }
        /*    col = 6;
            row++;

            if (row == 1) {
                continue;
            }
            char* field = strtok(buf, ",");
            printf("\n");
            char* string = field;
            string = strtok(NULL, ",");
            if (strcmp(field, province) == 0)
            {
                while (field)
                {
                   if (col == 6)
                    {
                        if (row == 1)
                        {
                            strcmp(field, a);
                        }


                    }
                }
            }*/
    }


    else if (province == "Alberta")
    {

        switch (choice)
        {
        case 1:
            k++;
            printf("\nYou voted for Nichole");
            //code to update col 6 & row 3
            break;



        case 2:
            l++;
            printf("\nYou voted for Amanda");
            //code to update col 7 & row 3
            break;


        case 3:
            m++;
            printf("\nYou voted for Jane");
            //code to update col 8 & row 3
            break;

        case 4:
            n++;
            printf("\nYou voted for Aline");
            //code to update col 9 & row 3
            break;


        case 5:
            o++;
            printf("\nYou voted for Sandra");
            //code to update col 10 & row 3
            break;


        }

    }

    else if (province == "Nova Scotia")
    {

        switch (choice)
        {
        case 1:
            p++;
            printf("\nYou voted for Martin");
            //code to update col 6 & row 4
            break;



        case 2:
            q++;
            printf("\nYou voted for Samantha");
            //code to update col 7 & row 4
            break;


        case 3:
            r++;
            printf("\nYou voted for Paul");
            //code to update col 8 & row 4
            break;


        case 4:
            s++;
            printf("\nYou voted for Jack");
            //code to update col 9 & row 4
            break;


        case 5:
            t++;
            printf("\nYou voted for Jill");
            //code to update col 10 & row 4
            break;


        }

    }

//}
fclose(fp);

return 0;
}
