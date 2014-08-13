#include<stdio.h>
#include<stdlib.h>

#define max 10

void giris(void);
void liste(void);

FILE *fp;
int a[max];

void main()
{
    int i;
    char c;

    if((fp=fopen("array.dat","r+"))==NULL)
    {
        fp=fopen("array.dat","w+");
    }

    do
    {
        system("cls");
        fseek(fp,0,2); // seek_end =2
        printf("dosya uzunlugu : %d\n",ftell(fp));
        printf("kayit sayisi: %d\n",ftell(fp)/sizeof(int));


     printf("1-Giris\n2-Liste\n3-Cikis\n");
     c=getchar();
     switch(c)
     {
         case '1': giris(); break;
         case '2': liste(); break;
         case '3': exit(0);
     }
    }while(1);




    }


void giris()
{
    int i;
    system("cls");
    for(i=0; i<max; i++)
    a[i]=rand()%100;

    fseek(fp,0,0); //seek_set beginning
    fwrite(a,sizeof(int),max,fp);
}

void liste()
{
    int i;
    system("cls");

    fseek(fp,0,0);
    fread(a,sizeof(int),max,fp);

    for(i=0; i<max; i++)
    printf("%d\t",a[i]);

    printf("\n");

}
