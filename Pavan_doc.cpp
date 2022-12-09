#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <dos.h>
#include <vector>
#include <string.h>
#include <ctype.h>
int userinputvalidation(int, int);
void skeleton();
void dbat();
void dban();
void confirm();
void print_table();
using namespace std;
int main()
{
    skeleton();
    return 0;
}
void skeleton()
{

    system("CLS");
    HANDLE console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    int ch, ch1;
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 20;
    cfi.dwFontSize.Y = 30;
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = 900;
    wcscpy_s(cfi.FaceName, L"Calibri");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
    SetConsoleTextAttribute(console_color, 1);
    cout << "\t\t      DIGITAL PERIODIC TABLE\n\n";
    cfi.dwFontSize.X = 0;
    cfi.dwFontSize.Y = 0;
    SetConsoleTextAttribute(console_color, 2);
    cout << "CHOOSE ANY OPERATION\n";
    cout << "1)Retrive Data by atomic number\n";
    cout << "2)Retrive Data by element name\n3)EXIT\n";
    SetConsoleTextAttribute(console_color, 15);
    printf("Enter your choice\n");
    ch = userinputvalidation(1, 10);
    ch1 = ch;
    switch (ch1)
    {
    case 1:
        system("CLS");
        dbat();
        break;
    case 2:
        system("CLS");
        dban();
        break;
    case 3:
        exit(1);
        break;
    }
    return;
}

int userinputvalidation(int l, int h)
{

    int ch;

    scanf("%d", &ch);
    if (ch <= h && ch >= l)
    {
        return ch;
    }
    else
    {
        cout << "Your have entered a wrong choice\nenter again\n";
        userinputvalidation(l, h);
    }
}

void dbat()
{
    int atn;
    FILE *fp1, *fp2;
    char name[10], an;
    system("CLS");
    print_table();
    HANDLE console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console_color, 12);
    printf("Enter atomic number \n");
    atn = userinputvalidation(1, 118);
    fp1 = fopen("atn.txt", "r");
    fp2 = fopen("atname.txt", "r");
    while (fscanf(fp1, "%d", &an) != EOF && fscanf(fp2, "%s", name) != EOF)
    {
        if (an == atn)
        {
            printf("atomic number=%d\nElement name=%s\n ", atn, name);
        }
    }
    fclose(fp1);
    fclose(fp2);
    confirm();
    return;
}
void dban()
{
    system("CLS");
    print_table();
    FILE *fp1, *fp2;
    char name[10], name1[10];
    int atn = 0, r = 1;
    printf("Enter the element name \n");
    scanf("%s", name);
    fp1 = fopen("atname.txt", "r");
    fp2 = fopen("atn.txt", "r");
    while (fscanf(fp1, "%s", name1) != EOF && fscanf(fp2, "%d", &atn) != EOF)
    {
        name[0] = toupper(name[0]);
        r = strcmp(name, name1);
        if (r == 0)
        {
            printf("Element name=%s\natomic number=%d\n", name1, atn);
        }
    }
    fclose(fp1), fclose(fp2);
    confirm();
    return;
}
void addd()
{
    system("CLS");
    print_table();
    confirm();
    return;
}
void confirm()
{
    int ex = 0;
    HANDLE console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console_color, 1);
    printf("Press 1 to exit\nPress any other key for MAIN MENU\n");
    cin >> ex;
    if (ex == 1)
        exit(1);
    else
        skeleton();
}
void print_table()
{
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;
    cfi.dwFontSize.Y = 20;
    FILE *fp1;
    HANDLE console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console_color, 10);
    char ch;
    fp1 = fopen("table.txt", "r");
    ch = fgetc(fp1);
    while (ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fp1);
    }
    return;
}
