#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sub
{
    int monthly_bill;

    char name[20];

    char street[50];
};

void getdata(struct sub *,int);
void printdata(struct sub *,int);



char na[20];
char st[50];
void main()
{
    struct sub *p;

    int i,j;

    printf("-----Subscriber App-----\n\n");
    printf("How many subscriber do you want to add?\n");
    scanf("%d",&i);

   p=(struct sub *) malloc( i * (sizeof(struct sub)));

   if(p)
   {
   getdata(p,i);
   printdata(p,i);
   }
   else
   {
   puts("Out Of Memory");
    exit(0);
   }

}

void getdata(struct sub *p,int i)
{
int n;
for(n=0; n<i; n++)
{
printf("\n");
printf("Username: ");
gets(na);
strcpy(p->name,na);
printf("\n");
printf("Address: ");
gets(st);
strcpy(p->street,st);
printf("\n");
printf("Monthly Bill: ");
scanf("%d",p->monthly_bill);
p++;

}
}

void printdata(struct sub *p,int i)
{
int n;

for(n=0; n<i; n++)
{
printf("Username: %s\n",p->name);
printf("Address: %s\n",p->street);
printf("Monthly Bill: %d\n",p->monthly_bill);
p++;
}

}

