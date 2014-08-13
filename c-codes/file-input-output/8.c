#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void menu(void);
void add(void);
void list(void);

int account;
char name[30];
int balance;

FILE *cfPtr;

void main()
{
    menu();
}

/**************************************************/
/*menu icin*/
void menu()
{
    char secim;
    do
    {
    printf("\n\n\n\t********MAIN   MENU********\n\n");
	printf("\n\t[A]-ADD NEW RECORD\n");
    printf("\t[L]-LIST\n");
 	printf("\t[Q]-QUIT\n");
	printf("\t\n\n\n[PLEASE SELECT]\n");

     secim=getchar();
                 if(secim=='A'||secim=='a')
	      add();
                 else if(secim=='L'||secim=='l')
                 {
                    list();
                 }
	  else if(secim=='Q'||secim=='q')
	      exit(0);

}while(secim!='Q' || secim!='q');

}
/**************************************************/
/*KAYIT EKLEMEK icin*/

void add()
{
    system("cls");

    if((cfPtr=fopen("record.dat","w"))==NULL)
       {
           printf("can not open\n");
           exit(0);
       }
  else
  {
      printf("enter account,name,balance\n");
      printf("enter EOF for quit\n");
      scanf("%d%s%f",&account,name,&balance);

      while(!feof(stdin))
      {
          fprintf(cfPtr,"%d %s %.2f",&account,name,&balance);
          scanf("%d%s%f",&account,name,&balance);

      }

  fclose(cfPtr);
  }
  printf("print any key...\n");
  system("cls");
}

/**************************************************/
/*LISTELEMEK icin*/

void list()
{
    char secim2;

    do
    {
        system("cls");
        printf("\n\n\n\t********LIST   MENU********\n\n");
        printf("\n\t[Z]-List Acoounts with ZERO BALANCE\n");
        printf("\t[C]-List Acoounts with CREDIT BALANCE\n");
        printf("\t[D]-List Acoounts with DEBIT BALANCE\n");
        printf("\t[R]-MAIN MENU\n");
        printf("\t\n\n\n[PLEASE SELECT]\n");

        secim2=getchar();
        if(secim2=='Z' || secim2=='z')
        {
        system("cls");
        printf("\n\n\n\t********ACCOUNTS with ZERO    BALANCE********\n\n");
        if((cfPtr=fopen("record.dat","r"))==NULL)
        {
            printf("can not open\n");
        }
        else
        {
            fscanf(cfPtr,"%d%s%f",&account,name,&balance);

            while(!feof(stdin))
            {
                if(balance==0)
                {
                    printf("\t%-10d%-13s%7.2f\n", account, name, balance);
                }

                fscanf(cfPtr,"%d%s%f",&account,name,&balance);
            }
            fclose(cfPtr);
        }

        printf("Press any key to continue....");
        getchar();
        }
       else if(secim2=='C' || secim2=='c')
        {
            system("cls");
            printf("\n\n\n\t********ACCOUNTS with CREDIT BALANCE********\n\n");

            if((cfPtr=fopen("record.dat","r"))==NULL)
               {
                   printf("can not open\n");
               }
               else
               {
                   fscanf(cfPtr,"%d%s%f",&account,name,&balance);
               while(!feof(stdin))
               {
                    if(balance<0)
                    {
                         printf("\t%-10d%-13s%7.2f\n", account, name, balance);
                    }
                   fscanf(cfPtr,"%d%s%f",&account,name,&balance);
               }
               fclose(cfPtr);

               }
               printf("Press any key to continue....");
               getchar();
        }

        else if(secim2=='D'||secim2=='d')
{
      system("cls");
      printf("\n\n\n\t********ACCOUNTS with DEBIT BALANCE********\n\n");
      if((cfPtr = fopen("records.dat", "r"))==NULL)
	printf("COULD NOT OPEN FILE!!\n");
      else
     {
        fscanf(cfPtr, "%d%s%f", &account, name, &balance);

         while(!feof(cfPtr)){
	if(balance > 0)
         printf("\t%-10d%-13s%7.2f\n", account, name, balance);
         fscanf(cfPtr, "%d%s%f", &account, name, &balance);
         }
fclose(cfPtr);
}
printf("Press any key to continue....");
getchar();
}
else if(secim2=='R'||secim2=='r')
{
system("cls");
menu();
}
}while(secim2!='R' || secim2!='r');
printf("Press any key to continue....");
getchar();
system("cls");
}



