#include<stdio.h>
#include<stdlib.h>

void main()
{
    int account;
    char name[30];
    float balance;

    FILE *cfPtr;

    if((cfPtr=fopen("clients.dat","w"))==NULL)
    {
        printf("can not open\n");
    }
    else
    {
        printf("enter the account name and balance\n");
        printf("enter EOF to end input\n");
        scanf("%d%s%f",&account,name,&balance);

    while(!feof(stdin))
    {
        fprintf(cfPtr,"%d %s %2.f\n",account,name,balance);
        scanf("%d%s%f",&account,name,&balance);
    }
    fclose(cfPtr);
    }

}
