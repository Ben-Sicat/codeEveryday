#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include<time.h>

void MD();
void AD();
void BV();
void mainmenu();
void exit();
void SD();
void promptAmount();
COORD coord = {0,0};

void gotoxy(int x,int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int num;
float price;
float total;
char choice;
int again;

void main()
{
	mainmenu();
}

void mainmenu()
{
	char choice = ' ' ;
  printf("              ======================================          \n");
  printf("               INSERT SHOP NAME MGA KA GROUPMATES          \n ");
  printf("             ======================================          \n\n");

  printf("\t\tEnter [A] -> Main Dish \n");
  printf("\t\tEnter [B] -> AppetizePhp & Desserts\n");
  printf("\t\tEnter [C] -> Beverages\n");
  printf("\t\tEnter [D] -> Side\n");
  printf("\t\tEnter [E] -> Exit\n\n");

  printf("              ======================================          \n");
  time_t t;
  time(&t);
  printf("\t\t %s", ctime(&t));
  printf("              ======================================          \n\n");

  printf("\t      Please Enter Your Choice: ");
  scanf("%c", &choice);

  system("cls");

    {
		if (toupper(choice) == 'A')
              MD();
        else if (toupper(choice) == 'B')
              AD();
        else if (toupper(choice) == 'C')
              BV();
        else if (toupper(choice) == 'D')
              SD();
        else if (toupper(choice) == 'E') 
              exit(0);
        // you can change this to else and remove conditions. it will work same.
        else if (toupper(choice) != 'A', 'B' , 'C' , 'D')
            {
               mainmenu();
            }
	}

}

void MD()
{

  int choice = 0;
  int quantity = 0;
  int again = 0;
  printf("\t            ==============================          \n");
  printf("\t                       Main Dish   \n");
  printf("\t            ==============================          \n\n");

  printf("\t   [1] Adobong Manok                      - Php.69 \n");
  printf("\t   [2] Tinolang Manok                     - Php.69 \n");
  printf("\t   [3] Liempo                             - Php.129 \n");
  printf("\t   [4] Caldareta                          - Php.79 \n");
  printf("\t   [5] Menudo                             - Php.79 \n");
  printf("\t   [6] Krispy Pork Belly                  - Php.199 \n");
  printf("\t   [7] Chicken Inasal                     - Php.159 \n");
  printf("\t   [8] Krispy Pata                        - Php.299 \n");
  printf("\t   [9] Sizziling Sisig                    - Php.69 \n");
  printf("\t   [10] Sinigang na Baboy                 - Php.79 \n");
  printf("\t   [11] Back To Main-Menu         ");

  printf("\n\n \t   Enter your choice here : ");
  scanf("%d", &choice);
  {
     if (choice == 1)
	   {
           printf("\nAdobong Manok\n\n");
	       printf("Enter Quantity : ");
	       scanf("%d", &quantity);
           total = 69 * quantity ;
           printf("===================================          ");
           printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
           printf("====================================          \n");
	       printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
           scanf("%d", &again);
           system("cls");

			 if (again == 1 )
				 MD();
			 else if (again == 2 )
                 mainmenu();
			 else if (again != 1 , 2)
				{
				   printf("\n\n\t\tSorry Invalid Decision Entered\n\n");

				   exit(0);
				}
       }

	else if ( choice == 2)
       {
		  printf("\nTinolang Manok\n\n");
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total = 69 * quantity ;
		  printf("===================================          ");
          printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
          printf("====================================          \n");
          printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
          scanf("%d", &again);
          system("cls");

			 if (again == 1 )
				MD();
			 else if (again == 2 )
				mainmenu();
			 else if (again != 1 , 2)
				{
				   printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
				   exit(0);
				}
        }
    else if ( choice == 3 )
        {
			  printf("\nLiempo\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 129 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   MD();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 4 )
        {
			  printf("\nCaldareta\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 79 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   MD();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 5 )
        {
			  printf("\nMenudo\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 79 * quantity ;
			  printf("===================================          ");
           	  printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   MD();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 6 )
        {
			  printf("\nKrispy Pork Belly\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 199 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   MD();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 7 )
        {
			  printf("\nChicken Inasal\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 159 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   MD();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 8 )
        {
			  printf("\nKrispy Pata\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 299 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   MD();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 9 )
        {
			  printf("\nSizziling Sisig\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 69 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   MD();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 10 )
        {
			  printf("\nSinigang na Baboy\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total = 79 * quantity ;
			  printf("===================================          ");
              printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
              printf("====================================          \n");
              printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   MD();
                }
			  else if (again == 2 )
				{
				   mainmenu();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n Please EXIT the program.\n");
					 exit(0);
                }
        }



    else if ( choice == 11 )
        {
            mainmenu();

        }
    else if (choice != 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10, 11 )
        {
            system("cls");
            printf("\n\n\t\t   Invalid Choice Entered\n\n");
            MD();
        }
  }

}

void AD()
{
  int choice;
  int quantity;
  int again;

  printf("\t               ==============================          \n");
  printf("\t                     Appetizers & Desserts   \n");
  printf("\t               ==============================          \n\n");

  printf("\t   [1] Onion Rings                                - Php.30 \n");
  printf("\t   [2] Fried Siomai                               - Php.25 \n");
  printf("\t   [3] Tokwa't Baboy                              - Php.69 \n");
  printf("\t   [4] Lumpiang Toge                              - Php.39 \n");
  printf("\t   [5] Dynamite Cheese Sticks                     - Php.25 \n");
  printf("\t   [6] Ceasar Salad                               - Php.50 \n");
  printf("\t   [7] Leche Flan                                 - Php.49 \n");
  printf("\t   [8] Fruit Salad                                - Php.79 \n");
  printf("\t   [9] Ube Halaya                                 - Php.89 \n");
  printf("\t   [10] Halo-Halo                                 - Php.99 \n");
  printf("\t   [11] Special Turon                             - Php.35 \n");
  printf("\t   [12] Special Bibingka                          - Php.99  \n");
  printf("\t   [13] Back To Main-Menu               \n");

  printf("\n \t   Enter your choice here : ");
  scanf("%d", &choice);
  {
     if (choice == 1)
	   {
	      printf("\nOnion Rings\n\n");
	      printf("Enter Quantity : ");
	      scanf("%d", &quantity);
	      total = 30 * quantity ;
	      printf("===================================          ");
          printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
          printf("====================================          \n");
	        {
		       printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
               scanf("%d", &again);
		       system("cls");
		       if (again == 1 )
			      AD();
               else if (again == 2 )
				  mainmenu();
		       else if (again != 1 , 2)
               {
			      printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
			      exit(0);
			   }
            }
       }
	else if ( choice == 2)
       {
		  printf("\nFried Siomai\n\n");
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total = 25 * quantity ;
		  printf("===================================          ");
          printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
          printf("====================================          \n");
		  {
		    printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
		    scanf("%d", &again);
		    system("cls");
		    if (again == 1 )
			   AD();
		    else if (again == 2 )
				mainmenu();
		    else if (again != 1 , 2)
			{
			   printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
			   exit(0);
			}
		  }
       }
    else if ( choice == 3 )
        {
            printf("\nTokwa't Baboy\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 69 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					AD();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 4 )
        {
            printf("\nLumpiang Toge\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 39 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					AD();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 5 )
        {
            printf("\nDynamite Cheese Sticks\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 25 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					AD();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 6 )
        {
            printf("\nCeasar Salad\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 50 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					  AD();
				else if (again == 2 )
                      mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 7 )
        {
            printf("\nLeche Flan\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 49 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					AD();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 8 )
        {
            printf("\nFruit Salad\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 79 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					AD();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 9 )
        {
            printf("\nUbe Halaya\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 89 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					AD();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 10 )
        {
            printf("\nHalo-Halo\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 99 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					AD();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 11 )
        {
            printf("\nSpecial Turon\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 35 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					AD();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 12 )
        {
            printf("\nSpecial Bibingka\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 99 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					AD();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }

    else if ( choice == 13 )
        {
            mainmenu();

        }
    else if (choice != 1,2,3,4,5,6,7,8,9,10,11,12,13)
                    {

						system("cls");
						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						AD();
                    }
  }

}

void BV()
{
  int choice;
  int quantity;
  int again;

  printf("\t               ==============================          \n");
  printf("\t                        Beverages   \n");
  printf("\t               ==============================          \n\n");
  printf("\t   [1] Orange Juice                                    - Php.69 \n");
  printf("\t   [2] Iced Tea                                        - Php.69 \n");
  printf("\t   [3] Apple Juice                                     - Php.69 \n");
  printf("\t   [4] Fruit Shake                                     - Php.79 \n");
  printf("\t   [5] Coca-cola                                       - Php.49 \n");
  printf("\t   [6] Sprite                                          - Php.49 \n");
  printf("\t   [7] Mountain Dew                                    - Php.49 \n");
  printf("\t   [8] Royal                                           - Php.49 \n");
  printf("\t   [9] Sarsi                                           - Php.49 \n");
  printf("\t   [10] Root Beer                                      - Php.49 \n");
  printf("\t   [11] Gatorade                                       - Php.59 \n");
  printf("\t   [12] Fanta                                          - Php.49 \n");
  printf("\t   [13] San Miguel Light/Apple                         - Php.80 \n");
  printf("\t   [14] Red Horse Beer (1 Liter)                       - Php.149 \n");
  printf("\t   [15] Smirnoff Mule                                  - Php.80 \n");
  printf("\t   [16] Tanduay Ice                                    - Php.80 \n");
  printf("\t   [17] Back To Main-Menu               \n");


  printf("\n \t   Enter your choice here : ");
  scanf("%d", &choice);
  {
      if (choice == 1)
	   {
	      printf("\nOrange Juice\n\n");
	      printf("Enter Quantity : ");
	      scanf("%d", &quantity);
	      total = 69 * quantity ;
	      printf("===================================          ");
          printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
          printf("====================================          \n");
	        {
		       printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
               scanf("%d", &again);
		       system("cls");
		       if (again == 1 )
			      BV();
               else if (again == 2 )
				  mainmenu();
		       else if (again != 1 , 2)
               {
			      printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
			      exit(0);
			   }
       }
}
	else if ( choice == 2)
       {
		  printf("\nIced Tea\n\n");
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total = 69 * quantity ;
		  printf("===================================          ");
          printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
          printf("====================================          \n");
		  {
		    printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
		    scanf("%d", &again);
		    system("cls");
		    if (again == 1 )
			   BV();
		    else if (again == 2 )
				mainmenu();
		    else if (again != 1 , 2)
			{
			   printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
			   exit(0);
			}
		  }
       }
    else if ( choice == 3 )
        {
            printf("\nApple Juice\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 69 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 4 )
        {
            printf("\nFruit Shake\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 79 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 5 )
        {
            printf("\nCoca-Cola\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 49 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 6 )
        {
            printf("\nSprite\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 49 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 7 )
        {
            printf("\nMountain Dew\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 49 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 8 )
        {
            printf("\nRoyal\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 49 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 9 )
        {
            printf("\nSarsi\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 49 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 10 )
        {
            printf("\nRoot Beer\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 49 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 11 )
        {
            printf("\nGatorade\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 59 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 12 )
        {
            printf("\nFanta\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 49 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 13 )
        {
            printf("\nSan Miguel Light/Apple\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 80 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 14 )
        {
            printf("\nRed Horse Beer (1 Liter) \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 149 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 15 )
        {
            printf("\nSmirnoff Mule\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 80 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 16 )
        {
            printf("\nTanduay Ice\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 80 * quantity ;
            printf("===================================          ");
            printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
            printf("====================================          \n");
            {
				printf("\nWould you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					BV();
				else if (again == 2 )
                    mainmenu();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }


     else if ( choice == 17 )
        {
            mainmenu();
        }
     else if (choice != 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17)
            {
                system("cls");
                printf("\n\n\t\t   Invalid Choice Entered\n\n");
                BV();

            }
  }

}

void SD()
{
    int choice;
    int cont = 1;
    int cost[] = {69,69,129,79,79,199,159};

    printf("\t            ==============================          \n");
    printf("\t                       Side Dish   \n");
    printf("\t            ==============================          \n\n");
    printf("\t   [1] Mozzarella sticks                        - Php.69 \n");
    printf("\t   [2] Fish and chips                           - Php.69 \n");
    printf("\t   [3] French Fries                             - Php.129 \n");
    printf("\t   [4] Coleslaw                                 - Php.79 \n");
    printf("\t   [5] Calamares                                - Php.79 \n");
    printf("\t   [6] Macaroni                                 - Php.199 \n");
    printf("\t   [7] Buttered Corn                            - Php.159 \n");
    printf("\t   [8] Back To Main-Menu         ");

    printf("\n\n \t   Enter your choice here : ");
    scanf("%d", &choice);
    char dish[20][20] = {"Mozzarella sticks", "Fish-and-chips", "French-Fries", "Coleslaw", "Calamares", "Macaroni", "Buttered-Corn"};
    promptAmount(dish[choice-1],choice);
    
}

void promptAmount(char dish[], int choice)
{
  int quantity;
  printf("%s\n", dish);
  printf("Enter Quantity : ");
  scanf("%d", &quantity);
  total = 69 * quantity ;
  printf("===================================          ");
  printf("\nYour total bill amount is Php.%.2f,\nPayment: CASH\n", total);
  printf("====================================          \n");
  printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
  scanf("%d", &again);
  system("cls");
  if (again == 1 ){
    SD();
  }
  else if (again == 2 ){
    mainmenu();
  }
  else{
    printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
    exit(0);
  }
}
void exit(back)
{
  printf("\n\n\t     ===============FOS==================          ");
  printf("   \n              Thanks for choosing our restaurant\n\n");
  printf("                  We hope to see you again!  \n");
  printf("\t     ====================================  \n");
  printf("                You can now exit the program!  \n");
  getch();
  exit(0);

}

// If you think there will be a recuring event in your program, Code it in a function so that it can be called later and you wont have to write the same code again and again.
