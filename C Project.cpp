/*Programmer: Alwayne Bailey 


Username: admin             
Password: pass              */ 


//_________________PRE-PROCESSOR DIRECTIVES_____________________________________
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dos.h>
#include <windows.h>
#include <stdlib.h>

//_________________Macros_____________________________________
#define Invalid (printf("Invalid choice, please reselect"))

//_________________Structures_____________________________________
struct Movie
{
	int movie_code;
	int PG_rating;
	int duration;
	char title[20];
	char director[20];
	char movie_type[20];
	char status[20];
}Movie;    

//_________________Function Prototypes_________________________
void OpenScreen(void);
void Welcome_Menu(void);
void Worker(void);
void Customer(void);
void Add_Movie(void);
void Update_Movie(void);
void Generate_Movie_Ticket(void);
void Buy_Ticket(void);
void Generate_Schedule(void);

void writeToFile(struct Movie obj);
void readFromFile(char [] );

void password();



//____________________________Main_______________________________
int main(void)    //start main

{
   
	OpenScreen();
	return 0;
}		 //end main

void OpenScreen()
{

     char menuChoice;

system("color 03"); //Display the words in Aqua.
 printf("\n\n\t[\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
                   "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
                   "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
                   "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD]\n\n"
                   "\t\tCastle Amusement Company Limited Management System v1.0   "
                   "\n\n                                           "
                   "\n\n\t           Created By:Godfrey Stewart "
                   "\n\n\t[\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
                   "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
                   "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
                   "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\]"
                   "\n\n\t'S' to SignIn \n\n \t    or \n\n\t'X' to Exit\n\n\t--->");

                   menuChoice =toupper(getch());
                   putchar(menuChoice);

                   printf("\n");
                   system("cls");



         switch(menuChoice)
       		{

         case 'S':   
                     Welcome_Menu();
                     getch();
         				break;

         case 'X':  printf("The program will now now close...");
                    sleep(1000);
     				exit(1);
                     break;

         default:	printf("\n\n\n\t Invalid choice, please choose again!!!");
                     sleep(2000);
                     system("cls");
                     OpenScreen();
				}
         getch();
         system("cls");;
}


void Welcome_Menu(void)
{
	int option;
	system("color 20");//Display words in red with an aquamarine background.

    printf("\t***************************************************************\n");
	printf("\t***************************************************************\n");
	printf("\t*                        Welcome to                           *\n");
	printf("\t*                          Castle                             *\n");
	printf("\t*                   Amusement Company Limited                 *\n");
  	printf("\t*                                                             *\n");
	printf("\t***************************************************************\n");
	printf("\t***************************************************************\n");
    printf(" User Accounts");
    printf("\t________________________________________________\n");
    printf("\t\t________________________________________________\n");
    printf("\n\t\t Please select an option from the menu below:\n");
    printf("\n 1.\tWorker ");
    printf("\n 2.\tCustomer");
    printf("\n Please select an option:");
    scanf("%d\n", &option);
	system("cls");

	switch(option)
	{
	case 1:
		Worker();
	    break;

	case 2:
		Customer();
	    break ;

	case 3:
         //default:
         //sleep(1);
         printf("\n\t\t\tINVALID OPTION!!");
      	 sleep(2);  
	     printf("\n\n\t I'M SORRY, YOU ARE NOT GRANTED ACCESS TO A MENU...");  //This is displayed when the three attempts fails
         sleep(1);
      	 printf("\n\n\t\t\tPlease try again.");
      	 sleep(2000); //Pauses operations for 2 seconds.
         system("cls");
	{
	Welcome_Menu();
	}
break;
}         //closes case
getch();
}

void password()
{
char password[30],ch;
	int i,option,n;
	char username[30];
	system("color 04");
     for (i = 1;i <4; i++)
     {
        printf("\n\t\t\t***** SECURITY INFO NEEDED *****\n\n");
        printf("\t\t________________________________________________");
        printf("\n\t\t________________________________________________\n");
		  printf("\n\t  ************************************************************\n");
        printf("\t\t\t\Worker\n");
	     printf("\t  ************************************************************\n");
	     printf("\n\n");
        printf("\n \t\t\t\t    ***");
        printf("\n \t\t\t\t  **   **");
        printf("\n \t\t\t\t **\t**");
        printf("\n \t\t\t\t **\t**");
        printf("\n \t\t\t\t **\t**");
        printf("\n \t\t\t\t **\t**");
        printf("\n \t\t\t\t **\t**");
        printf("\n \t\t\t\t***********");
        printf("\n \t\t\t\t***********");
        printf("\n \t\t\t\t***********");
        printf("\n \t\t\t\t***********");
        printf("\n \t\t\t\t***********");
        printf("\n\n\t\t\tPlease enter your Username: ");
        fflush(stdin);
        scanf("%[^\n]",username);

        printf("\n\t\t\tPlease enter your Password: ");
        fflush(stdin);
        n = 0;
        while(1)      //infinite loop
         {
         	if(n<0)    //checks if 'i' is less than 0
              n=0;       //assignes 0 to 'i'
              ch=(char)getch();  //gets the user input from keyboard

            if(ch==13)    //13 is ASCII value of enter
               break;     //breaks if the user press enter

            if(ch==8)     //8 is ASCII value of backspace
            {

            	putch('\b');  //creates a backspace.

               putch(NULL);  //puts an empty space for the deleted character
               putch('\b');  //creates a backspace
               --n;          //decrements 'i' by 1
               continue;

            }
            password[n++] =ch;  /*allows the user to enter any string length and
                                  passes the value of 'password'to 'ch'*/
            ch='*';         //assignes '*' to 'ch'
            putch(ch);   //outputs the value of 'ch'on screen

         }
        password[n] = '\0';

		if (strcmp(username, "admin")!=0 || strcmp(password, "pass")!=0)
        {
            printf("\a\a\a\t\t\tYou have entered an invalid password Or username\n");
            printf("\t\t\tYou have %d tries remaining\n\n",i+1);
            if (i == 3)
            {
            	printf("\n\t\t\tSorry you have no more tries remaining\n\n");
            	printf("\n\t\t\tAccess has been Denied");
				printf("SYSTEM LOCKED");
				getchar();
				exit(0);
            }
        }
        else
            if (strcmp(username, "admin")==0 && strcmp(password, "pass")==0)
            {
				break;
            }
	}
      system("cls"); // clear screen display
      system("color 9"); //Display words in light blue.
      printf("\n\t\t\t***** Login Successful *****\n\n");
	   printf("\n\t  ************************************************************\n");
      printf("\n\n\n");
      printf("\n \t\t\t\t    ***");
      printf("\n \t\t\t\t  **   **");
      printf("\n \t\t\t\t **\t**");
      printf("\n \t\t\t\t **\t**");
      printf("\n \t\t\t\t **\t**");
      printf("\n \t\t\t\t **\t**");
      printf("\n \t\t\t\t **\t**");
      printf("\n \t\t\t\t   \t**");
      printf("\n \t\t\t\t   \t**");
      printf("\n \t\t\t\t   \t**");
      printf("\n \t\t\t\t************");
      printf("\n \t\t\t\t************");
      printf("\n \t\t\t\t************");
      printf("\n \t\t\t\t************");
      printf("\n \t\t\t\t************\n");
      system("pause");
      system("color 03");

}

void Worker(void)  //worker menu
{
	int option;
        password();
	system("cls");
	printf("\t***************************************************************\n");
	printf("\t***************************************************************\n");
	printf("\t*                                                             *\n");
	printf("\t*                          Castle                             *\n");
	printf("\t*                   Amusement Company Limited                 *\n");
  	printf("\t*                                                             *\n");
	printf("\t***************************************************************\n");
	printf("\t***************************************************************\n");
	printf("  \n");
	printf("\t\t**************WORKER MENU*******************\n\n");
	printf("\t-------->[1]: Add Movie\n");
	printf("\t-------->[2]: Update Movie\n");
	printf("\t-------->[3]: Generate Movie Schedule\n");
	printf("\t-------->[4]: Exit \n");

	printf("\nPlease enter an option: ");
	scanf("%d",&option);

switch (option)
{
		case 1:system("cls");
			Add_Movie();
           break;
		case 2:system("cls");
			Update_Movie();
           break;
		case 3:system("cls");
            Generate_Schedule();
           break;
		case 4: system("cls");
             OpenScreen();

		default:Invalid;
               getch();
			   system("cls");
               Worker();
               break;
	}
}//end of function

void Add_Movie(void)
{
       int opt, movie_code, PG_rating, duration;
       char title[30], director[20], movie_type[20], status[20];
       
       struct Movie movieObj;
	
	printf("Please enter the movie code: ");
	scanf("%d", &movieObj.movie_code);
	
	printf("Please enter the PG rating [13, 16, MA]: ");
	scanf("%d", &movieObj.PG_rating);
	
	printf("Please enter the director of the movie: ");
	scanf("%s", &movieObj.director);
	
	printf("Please enter the type of movie [action, comedy, romance]: ");
	scanf("%s", &movieObj.movie_type);
	
	printf("Please enter the status [active, inactive]: ");
	scanf("%s", &movieObj.status);
/*	if(strcmp(active, "A") == 0)
    {
	  printf("This movie is active");
	  fflush(stdin);
     }
     else
     {
	   printf("This movie is inactive");
	   fflush(stdin);
	   
     }
*/	
	
	printf("Please enter the Duration: ");
	scanf("%d", &movi
	
	
	writeToFile(movieObj);
	
	printf("\n\nReading From File\n\n");
	
	readFromFile("Movie Data.txt");
       
		 printf("\n\nDo you want to add another Movie?");
        printf("\n\n1. Yes\n2. No");
        scanf("%d",&opt);
        if(opt == 1)
        {
               system("cls");
               Add_Movie();
        }
        else{
			Worker();
        }   
}       



void writeToFile(struct Movie obj)
{
	FILE *fptr;
	
	fptr = fopen("Movie Data.txt", "a"); //can beopened in read(r), write(w), append(a)
	
	fprintf(fptr, "\n%d %d %s %s %s %d %s",obj.movie_code, obj.PG_rating, obj.director,obj.movie_type, obj.status, obj.duration, obj.title);
	
	fclose(fptr);
}

void readFromFile(char filename[20])
{
	FILE *fptr;
	int movie_code, PG_rating, duration;
    char title[20], director[20], movie_type[20], status[20];
	
	fptr = fopen(filename, "r");
	
	if(fptr != NULL)
	{
		while(!feof(fptr))
		{
            fscanf(fptr, "%d", &movie_code);
            fscanf(fptr, "%d", &PG_rating);
            fscanf(fptr, "%s", &director);
            fscanf(fptr, "%s", &movie_type);
            fscanf(fptr, "%s", &status);
			fscanf(fptr, "%d", &duration);
			fgets(title,20,fptr);
			printf("Movie Code: %d\n PG_rating: %d\n Director: %s\n Movie Type: %s\n Status: %s\n Duration: %d\n title: %s\n", movie_code, PG_rating, director, movie_type, status,  duration, title);	
		}
	}
	else
	{
		printf("Fle Doesn't Exist");
	}
	
	fclose(fptr);	
}


void Update_Movie(void)
{
     
     int opt, movie_code, PG_rating, duration;
     char title[30], director[20], movie_type[20], status[20];
       
		printf("\t***************************************************************\n");
		printf("\t\t\tUpdate Movie\n");
		printf("\t***************************************************************\n");
		
		//readFromFile(char filename[20]);
		
		printf("Movie Code: %d\n PG_rating: %d\n Director: %s\n Movie Type: %s\n Status: %s\n Duration: %d\n title: %s\n", movie_code, PG_rating, director, movie_type, status,  duration, title);	
        	
	
	     printf("\n\nDo you want to Update another Movie?");
        printf("\n\n1. Yes\n2. No");
        scanf("%d",&opt);
        if(opt == 1)
        {
               system("cls");
               Add_Movie();
        }
        else{
			Worker();
        }   
}       
}

void Generate_Schedule(void)
{
		printf("\t***************************************************************\n");
		printf("\t\t\tGenerate Movie Schedule\n");
		printf("\t***************************************************************\n");
}


void Customer(void)
{
	int option;

	system("cls");
	printf("\t***************************************************************\n");
	printf("\t***************************************************************\n");
	printf("\t*                                                             *\n");
	printf("\t*                           Castle                            *\n");
	printf("\t*                    Amusement Company Limited                *\n");
  	printf("\t*                                                             *\n");
	printf("\t***************************************************************\n");
	printf("\t***************************************************************\n");
	printf("  \n");
	printf("\t\t**************CUSTOMER MENU*******************\n\n");
	printf("\t-------->[1]: Buy Ticket\n");
	printf("\t-------->[2]: Generate Movie Ticket\n");
	printf("\t-------->[3]: Exit \n");

	printf("\nPlease enter an option: ");
	scanf("%d",&option);

switch (option)
{
		case 1:system("cls");
			Buy_Ticket();
           break;
		case 2:system("cls");
           Generate_Movie_Ticket();
           break;
		case 3: exit(0);

		default:printf("Invalid Option!!!");
               getch();
			   system("cls");
               Customer();
               break;
	}
}//end of function

void Buy_Ticket(void)
{
		printf("\t***************************************************************\n");
		printf("\t\t\tWelcome Buy Ticket\n");
		printf("\t***************************************************************\n");
}


void Generate_Movie_Ticket(void)
{
		printf("\t***************************************************************\n");
		printf("\t\t\tWelcome Generate Movie Ticket\n");
		printf("\t***************************************************************\n");
}
