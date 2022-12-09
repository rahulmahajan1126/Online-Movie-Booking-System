#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void home();
void movie();
int login();
void signup();
void loginpage();
void bookseat();
void detail();
int city;
char movienm[100];
char theatrenm[100];
char name[100];
char mv[100];
char s[100];
void main()
{
    home();
}

// functions

// 1//
void home()
{
    int choice;
    int choice1;
    printf("Welcome to online ticket booking system\n");
    printf("Enter 1 to Log In\n");
    printf("Enter 2 to get details of latest movies\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        // Log in
        // use file management for storing usernames and passwords in one file while sign up and then take the inputs from that file for log in//
        printf("Enter 1 for Sign up\nEnter 2 to go back\n");
        scanf("%d", &choice1);
        switch (choice1)
        {
        case 1:
            login();
            break;
        case 2:
            home();
            break;
        default:
            printf("Enter a correct value\n");
            break;
        }

    case 2:
        // txt files output
        movie();
        break;

    default:
        printf("Error\n");
        break;
    }
}

// 2//
void movie()
{
    int a;
    char ch;
    FILE *fp;
    fp = fopen("movies.txt", "r");
    ch = fgetc(fp);
    while (ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fp);
    }
    printf("Enter 1 to go back to home\n");
    scanf("%d", &a);
    if (a == 1)
    {
        home();
    }
    else
    {
        exit(0);
    }
}

int login()

{

    char id[50];

User:

    printf("Enter your id:\n");

    scanf("%s", &id);

    if (strcmp(id, "user11") == 0)

    {

        printf("Id is correct\n");
    }

    else

    {

        printf("You have entered an invalid user id\nPlease enter id again\n");

        goto User;
    }

    char pass[50];

pass:

    printf("Enter your password: ");

    scanf("%s", &pass);

    if (strcmp(pass, "1234") == 0)

    {

        printf("You have successly logged in \n");
        loginpage();
    }

    else

    {

        printf("You have entered a wrong password\nEnter your password again\n");

        goto pass;
    }

    return 0;
}

// 4//
void loginpage()
{
    int num;
    char ch11, ch12, ch21, ch22, ch31, ch32, ch41, ch42;
    FILE *fp11, *fp12, *fp21, *fp22, *fp31, *fp32, *fp41, *fp42;

    printf("Successfully logged in\n");
    printf("HOME\n");
    printf("Select your city(enter the number)\n");
    printf("1)Mumbai\n2)Bangalore\n3)Kolkata\n4)Delhi\n");
    scanf("%d", &city);

    switch (city)
    {

    case 1:
        printf("Enter 1 to see the list of cinemas in your city\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            // Create function
            //  Taking the names of cinmeas from file
            fp11 = fopen("mbtheatre.txt", "r");
            ch11 = fgetc(fp11);
            while (ch11 != EOF)
            {
                putchar(ch11);
                ch11 = fgetc(fp11);
            }
            printf("\n");
            printf("Select the theatre of your choice\n");
            scanf("%s", theatrenm);
            printf("Available movies\n");
            fp12 = fopen("mbmovie.txt", "r");
            ch12 = fgetc(fp12);
            while (ch12 != EOF)
            {
                putchar(ch12);
                ch12 = fgetc(fp12);
            }
            printf("Enter the number of desired movie\n");
            scanf("%s", movienm);
            bookseat();
            break;
        default:
            printf("Error !\n");
        }
        break;

    case 2:
        printf("Enter 1 to see the cinemas\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            // Create function
            //  Taking the names of cinmeas from file
            fp21 = fopen("blrtheatre.txt", "r");
            ch21 = fgetc(fp21);
            while (ch21 != EOF)
            {
                putchar(ch21);
                ch21 = fgetc(fp21);
            }
            printf("\n");
            printf("Select the theatre of your choice\n");
            scanf("%s", theatrenm);
            printf("Available movies\n");
            fp22 = fopen("blrmovies.txt", "r");
            ch22 = fgetc(fp22);
            while (ch22 != EOF)
            {
                putchar(ch22);
                ch22 = fgetc(fp22);
            }
            printf("Enter the number of desired movie\n");
            scanf("%s", movienm);
            bookseat();
            break;
        default:
            printf("Error !\n");
        }
        break;

    case 3:
        printf("Enter 1 to see the cinemas\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            // Create function
            //  Taking the names of cinmeas from file
            fp31 = fopen("klktheature.txt", "r");
            ch31 = fgetc(fp31);
            while (ch31 != EOF)
            {
                putchar(ch31);
                ch31 = fgetc(fp31);
            }
            printf("\n");
            printf("Select the theatre of your choice\n");
            scanf("%s", theatrenm);
            printf("Available movies\n");
            fp32 = fopen("klkmovie.txt", "r");
            ch32 = fgetc(fp32);
            while (ch32 != EOF)
            {
                putchar(ch32);
                ch32 = fgetc(fp32);
            }
            printf("Enter the number of desired movie\n");
            scanf("%s", movienm);
            bookseat();
            break;
        default:
            printf("Error !\n");
        }
        break;

    case 4:
        printf("Enter 1 to see the cinemas\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            // Create function
            //  Taking the names of cinmeas from file
            fp41 = fopen("dltheatre.txt", "r");
            ch41 = fgetc(fp41);
            while (ch41 != EOF)
            {
                putchar(ch41);
                ch41 = fgetc(fp41);
            }
            printf("\n");
            printf("Select the theatre of your choice\n");
            scanf("%s", theatrenm);
            printf("Available movies\n");
            fp42 = fopen("dlmovies.txt", "r");
            ch42 = fgetc(fp42);
            while (ch42 != EOF)
            {
                putchar(ch42);
                ch42 = fgetc(fp42);
            }
            printf("Enter the number of desired movie\n");
            scanf("%s", movienm);
            bookseat();
            break;
        default:
            printf("Error !\n");
        }

    default:
        printf("Error !\n");
        break;
    }
    fclose(fp11);
    fclose(fp12);
    fclose(fp21);
    fclose(fp22);
    fclose(fp31);
    fclose(fp32);
    fclose(fp41);
    fclose(fp42);
}

// Function decleration//
void bookseat()
{
    FILE *ptr6;
    ptr6 = fopen("bookseat.txt", "w");
    printf("Enter your name\n");
    scanf("%s", name);
    printf("------------------SCREEN------------------\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 65; j <= 75; j++)
        {
            printf("%d%c  ", i, j);
        }
        printf("\n");
    }
    printf("Enter the desired seat\n");
    scanf("%s", s);
    fprintf(ptr6, "%s", s);
    fclose(ptr6);
    detail();
}

// 7//
void detail()
{
    FILE *prt1, *prt2, *prt3, *prt4;
    prt1 = fopen("blrmovies.txt", "r");
    printf("-----------------------------------DETAILS-----------------------------------\n\n\n");
    printf("\t\tName : %s\n", name);
    if (city == 1)
    {
        printf("\t\tCity : Mumbai\n");
    }
    else if (city == 2)
    {
        printf("\t\tCity : Bangalore\n");
    }
    else if (city == 3)
    {
        printf("\t\tCity : Kolkata\n");
    }
    else if (city == 4)
    {
        printf("\t\tCity : Delhi\n");
    }
    printf("\t\tTheatre : %s\n", theatrenm);
    printf("\t\tMovie : %s\n", movienm);
    printf("\t\tSeat Number : %s\n", s);
}