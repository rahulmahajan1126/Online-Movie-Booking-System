// 3//
// int login()
// {
//     FILE *user, *pass;
//     user = fopen("username.txt", "r+");
//     pass = fopen("password.txt", "r+");
//     char un[100], ps[100], ckun[100], ckps[100], checkUn[100], checkPW[100], u = ' ';
//     int i = 0, find_user = 0, find_pass = 0;
// A1:
//     rewind(user);
//     rewind(pass);
//     do
//     {
//         printf("Enter your username\n");
//         scanf("%s", un);
//         while (fgets(checkUn, 512, user) != NULL)
//             if ((strstr(checkUn, un)) != NULL)
//                 find_user++;
//         if (find_user == 0)
//         {
//             printf("Username does not exist.\nDo you want to signup? Pres Y to signup or N to reeter username and password or any other key to move to homepage.\n");
//             break;
//         }
//         else
//         {
//             printf("Enter password\n");
//         A:
//             scanf("%s", ps);
//             while (fgets(checkPW, 100, pass) != NULL)
//             {
//                 if ((strstr(checkPW, ps)) != NULL)
//                 {
//                     find_pass++;
//                 }
//             }
//             if (find_pass == 0)
//             {
//                 printf("Wrong Password. Enter Again.\n");
//                 goto A;
//             }
//             else
//             {
//                 loginpage();
//             }
//         }
//     } while (u == ' ');
//     home();
// }

/*for (i = 0; fgets(checkUn, 100, user); i++)
{
    if (strcmp(checkUn, un))
    {
    A:
        printf("%s\n", checkUn);
        printf("Enter password\n");
        scanf("%s", ps);
        rewind(pass);
        for (int j = 0; fgets(checkPW, 100, pass); j++)
            if (i == j)
                if (strcmp(checkPW, ps))
                    loginpage();
                else
                    goto A;
    }
}*/

// if (p == 1234)
// {
//     printf("Successfully logged in\n");
//     loginpage();
// }
// else
// {
//     printf("Wrong password, Try again\n");
// }