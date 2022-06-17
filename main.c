#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define ENTER 13

struct info
{
    char fullname[100];
    char username[100];
    char email[100];
    char password[100];
    char phone[10];
};

struct restaurant
{
    char restaurant[100];
    char first_menu[20];
    char second_menu[20];
    char third_menu[20];
    char fourth_menu[20];
    char fifth_menu[20];
    char sixth_menu[20];
    char seventh_menu[20];
    char eighth_menu[20];
    int first, second, third, fourth, fifth, sixth, seventh, eighth;
};

struct restaurant r[5];
struct info s[100];

void signup();

void check();

int validate();
void login();
void members();
void cart();
void menu();
void order(int food);

int flag = 1, i = 0, j = 0, count = 0, caps = 0, small = 0, special = 0, numbers = 0;
int success = 0, x, choice;
char temp_name[100], temp_password1[100], temp_password2[100], temp_email[100], temp_mobile[100];
int total = 0, food_choice, n;
int search_choice, confirm;
int ch, food, res;

int main()
{
    system("cls");
    while (1)
    {
        printf("                       **************************************************************************\n");
        printf("                                       Welcome to Sizzling Place ordering system!\n");
        printf("                       **************************************************************************\n\n\n");
        printf("          1. SIGN UP \n\n          2. LOGIN \n\n          3. ABOUT GROUP 1 \n\n          4. EXIT \n\n\n             Please enter your choice(1-4): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            {
                signup();
                break;
            }
        case 2:
            {
                login();
                break;
            }
        case 3:
            {
                members();
            }
        case 4:
            {
                exit(1);
            }
        default:
            {
                printf("\n\n         =========================ERROR:=========================");
                printf("\n                Invalid option. Press any key to try again.");
                printf("\n         ========================================================");
                if(getch())
                    main();
            }
        }
    }
}

void signup()
{
    system("cls");
    printf("         SIGN UP:\n\n");
    printf("          > Enter your username: ");
    scanf("%s", temp_name);

    printf("\n\n          > Enter your email: ");
    scanf("%s", temp_email);

    printf("\n\n          > Enter password: ");
    scanf("%s", temp_password1);

    printf("\n\n          > Confirm password: ");
    scanf("%s", temp_password2);

    printf("\n\n          > Enter your number: ");
    scanf("%s", temp_mobile);

    x = validate();
    if (x == 1)
        check();
}

int validate()
{
    // Validate the name
    for (i = 0; temp_name[i] != '\0'; i++)
    {
        if (!((temp_name[i] >= 'a' && temp_name[i] <= 'z') || (temp_name[i] >= 'A' && temp_name[i] <= 'Z')))
        {
            printf("\n         Please enter the valid name.");
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        count = 0;
        for (i = 0; temp_email[i] != '\0'; i++)
        {
            if (temp_email[i] == '@' || temp_email[i] == '.')
                count++;
        }
        if (count >= 2 && strlen(temp_email) >= 5)
        {
            if (!strcmp(temp_password1, temp_password2))
            {
                if (strlen(temp_password1) >= 8 && strlen(temp_password1) <= 12)
                {
                    caps = 0;
                    small = 0;
                    numbers = 0;
                    special = 0;
                    for (i = 0; temp_password1[i]!= '\0'; i++)
                    {
                        if (temp_password1[i] >= 'A' && temp_password1[i] <= 'Z')
                            caps++;
                        else if (temp_password1[i] >= 'a' && temp_password1[i] <= 'z')
                            small++;
                        else if (temp_password1[i] >= '0' && temp_password1[i] <= '9')
                            numbers++;
                        else if (temp_password1[i] == '@' || temp_password1[i] == '&' || temp_password1[i] == '#' || temp_password1[i] == '*' || temp_password1[i] == '!')
                            special++;
                    }
                    if (caps >= 1 && small >= 1 && numbers >= 1 && special >= 1)
                        {
                            if (strlen(temp_mobile) == 11)
                            {
                                for (i = 0; i < 11; i++)
                                {
                                    if (temp_mobile[i] >= '0' && temp_mobile[i] <= '9')
                                    {
                                        success = 1;
                                    }
                                    else
                                    {
                                        printf("\n\n         =============================ERROR:============================");
                                        printf("\n         Please enter a valid mobile number. Press any key to try again.");
                                        printf("\n         ===============================================================");
                                        if(getch());
                                            signup();
                                    }
                                }
                                if (success == 1)
                                    return 1;
                            }
                            else
                            {
                                printf("\n\n         ===============================ERROR:==============================");
                                printf("\n         Please enter the 11 digit mobile number. Press any key to try again.");
                                printf("\n         ===================================================================");
                                if(getch())
                                    signup();
                            }
                        }
                    else
                    {
                        printf("\n\n         =======================================================ERROR:======================================================");
                        printf("\n         Password must contain at least one uppercase, lowercase, number, and special character. Press any key to try again.");
                        printf("\n         ===================================================================================================================");
                        if(getch())
                            signup();
                    }
                }
                else
                {
                    printf("\n\n         =============================================ERROR:=============================================");
                    printf("\n         Password is too short. The length must be between 8 to 12 characters. Press any key to try again.");
                    printf("\n         ================================================================================================");
                    if(getch())
                        signup();
                }
            }
            else
            {
                printf("\n\n         =======================ERROR:=======================");
                printf("\n         Password does not match. Press any key to try again.");
                printf("\n         ====================================================");
                if(getch())
                    signup();
            }
        }
        else
        {
            printf("\n\n         =======================ERROR:========================");
            printf("\n         Invalid email. Try again. Press any key to try again.");
            printf("\n         =====================================================");
            if(getch())
                signup();
        }
    }
}

void check()
{
    for(i = 0; i<100; i++)
    {
        if(!(strcmp(temp_email, s[i].email) && strcmp(temp_password1, s[i].password)))
        {
            printf("         The account already exist. Please try to login.");
            if(getch())
            main();
        }
    }

    if(i == 100)
    {
        strcpy(s[j].username, temp_name);
        strcpy(s[j].password, temp_password1);
        strcpy(s[j].email, temp_email);
        strcpy(s[j].phone, temp_mobile);
        j++;
        printf("\n\n         Account has been successfully created! Press any button to go back to the main menu.");
        if(getch())
        main();
    }
}

void login()
{
    system("cls");
    printf("         LOGIN\n\n");
    printf("          > Enter your email: ");
    scanf("%s", temp_email);

    printf("\n\n          > Enter your password: ");
    scanf("%s", temp_password1);

    for(i = 0; i<100; i++)
    {
        if(!strcmp(s[i].email, temp_email))
        {
            if(!strcmp(s[i].password, temp_password1))
            {
                system("cls");
                printf("                       **************************************************************************");
                printf("\n\n                                      Welcome, %s! You have successfully logged in!", s[i].username);
                printf("\n\n                       **************************************************************************\n");
                printf("         OPTIONS:\n\n          1. MENU\n\n          2. EXIT\n\n");
                printf("         Please enter your choice: ");
                scanf("%d", &search_choice);

                switch (search_choice)
                {
                case 1:
                    {
                        menu();
                        break;
                    }
                case 2:
                    {
                        exit(1);
                    }
                default:
                    {
                        printf("\n\n         =========================ERROR:=========================");
                        printf("\n         Please enter a valid option. Press any key to try again.");
                        printf("\n         ========================================================");
                        if(getch())
                            main();
                    }
                }
                break;
            }
            else
            {
                printf("\n\n         =====================ERROR:====================");
                printf("\n         Incorrect password. Press any key to try again.");
                printf("\n         ===============================================");
                if(getch())
                    main();
            }
        }
        else
        {
            printf("\n\n         ========================ERROR:=========================");
            printf("\n         The account does not exist. Press any key to try again.");
            printf("\n         =======================================================");
            if(getch())
                main();
        }
    }
}

void members()
{
    system("cls");
    printf("         MEMBERS:\n\n          > Aguilar, Hues River M.\n\n          > Dimapasok, Lance Andrie L.\n\n          > Gopez, Kevin Carlo O.\n\n          > Narciso, Calvin Kurt G.\n\n          > Panique, Danimie P.\n\n          > Reyes, Cristian Paul B.\n\n          > Siron, Justin Ceasar S.\n\n");
    printf("\n         PRESS ANY KEY TO GO BACK.");
    if(getch())
    main();
}

void restaurant()
{
    strcpy(r[1].first_menu, "BangSilog");
    strcpy(r[1].second_menu, "ChixSilog");
    strcpy(r[1].third_menu, "CornedSilog");
    strcpy(r[1].fourth_menu, "EmboSilog");
    strcpy(r[1].fifth_menu, "LongSilog");
    strcpy(r[1].sixth_menu, "LunchSilog");
    strcpy(r[1].seventh_menu, "TapSilog");
    strcpy(r[1].eighth_menu, "ToSilog");

    r[1].first = 75;
    r[1].second = 85;
    r[1].third = 55;
    r[1].fourth = 75;
    r[1].fifth = 45;
    r[1].sixth = 85;
    r[1].seventh = 55;
    r[1].eighth = 65;
}

void menu()
{
    total = 0;

    restaurant();
    while (1)
    {
        system("cls");
        printf("         **********************************************");
        printf("\n\n                    SIZZLING PLACE MENU:");
        printf("\n\n         **********************************************");
        printf("\n          1.) %s\t\t\tPHP %d", r[1].first_menu, r[1].first);
        printf("\n          2.) %s\t\t\tPHP %d", r[1].second_menu, r[1].second);
        printf("\n          3.) %s\t\tPHP %d", r[1].third_menu, r[1].third);
        printf("\n          4.) %s\t\t\tPHP %d", r[1].fourth_menu, r[1].fourth);
        printf("\n          5.) %s\t\t\tPHP %d", r[1].fifth_menu, r[1].fifth);
        printf("\n          6.) %s\t\tPHP %d", r[1].sixth_menu, r[1].sixth);
        printf("\n          7.) %s\t\t\tPHP %d", r[1].seventh_menu, r[1].seventh);
        printf("\n          8.) %s\t\t\tPHP %d", r[1].eighth_menu, r[1].eighth);
        printf("\n          9.) Cart\n          10.) Exit");

        printf("\n\n         Enter your choice: ");
        scanf("%d", &food);
        if(food > 10)
        {
            printf("         Invalid option. Press any key to continue.");
            if(getch())
            menu();
        }
        else if(food == 9)
            cart();
        else if(food == 10)
            exit(1);
        else
            order(food);
    }
}

void order(int food)
{
    if(food == 1)
    {
        printf("         Please enter the quantity of %s: ", r[1].first_menu);
        scanf("%d", &n);
        total = total + (n * r[1].first);
    }
    else if(food == 2)
    {
        printf("         Please enter the quantity of %s: ", r[1].second_menu);
        scanf("%d", &n);
        total = total + (n * r[1].second);
    }
    else if(food == 3)
    {
        printf("         Please enter the quantity of %s: ", r[1].third_menu);
        scanf("%d", &n);
        total = total + (n * r[1].third);
    }
    else if(food == 4)
    {
        printf("         Please enter the quantity of %s: ", r[1].fourth_menu);
        scanf("%d", &n);
        total = total + (n * r[1].fourth);
    }
    else if(food == 5)
    {
        printf("         Please enter the quantity of %s: ", r[1].fifth_menu);
        scanf("%d", &n);
        total = total + (n * r[1].fifth);
    }
    else if(food == 6)
    {
        printf("         Please enter the quantity of %s: ", r[1].sixth_menu);
        scanf("%d", &n);
        total = total + (n * r[1].sixth);
    }
    else if(food == 7)
    {
        printf("         Please enter the quantity of %s: ", r[1].seventh_menu);
        scanf("%d", &n);
        total = total + (n * r[1].seventh);
    }
    else if(food == 8)
    {
        printf("         Please enter the quantity of %s: ", r[1].eighth_menu);
        scanf("%d", &n);
        total = total + (n * r[1].eighth);
    }
}

void cart()
{
    printf("\n         ==============================================");
    printf("\n\n                            CART");
    printf("\n\n           The total amount of your order is: PHP %d", total);
    printf("\n\n         ==============================================");
    printf("\n\n         Are you sure of your order? (YES[1]/NO[2]): ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("         Thank you for your patronage, %s! \n         We got your order and we'll be sending you an email and a text message when it arrives!", s[i].username);
        exit(1);
    }
    else if (ch == 2)
    {
        printf("         Do you wish to EXIT[1] or RE-ORDER[2]?: ");
        scanf("%d", &confirm);
        if(confirm == 1)
        {
            printf("         Your order has been cancelled. Thank you for using Sizzling Place ordering system.");
            exit(1);
        }
        else if(confirm == 2)
        {
            printf("         Press any key to re-order.");
            if(getch());
            menu();
        }
    }
}
