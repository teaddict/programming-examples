#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stdrec
{
    int id;
    char name[20];
};

void getdata(struct stdrec *,int);
void printdata(struct stdrec *,int);

void main()
{
    int n;
    struct stdrec *p;

    printf("\ndynamic structs\n\n");
    printf("how many students> ");
    scanf("%d",&n);

    p=(struct stdrec *)malloc(n*(sizeof(struct stdrec)));

    if(p)
    {
        getdata(p,n);
        printdata(p,n);
    }
    else
    {
        printf("\nOUT OF MEMORY!!!\n");
    }
}
    void getdata(struct stdrec *p,int n)
    {
        int id,i;

        for(i=0; i<n; i++)
        {
            printf("Student ID> ");
            scanf("%d%*c",&p->id);
            printf("\n");
            printf("Student Name> ");
            gets(p->name);
            p++;
            printf("\n");
        }


    }
    void printdata(struct stdrec *p,int n)
    {
        int i;

        printf("Student ID\t\t\tStudent Name\n\n");
        for(i=0; i<n; i++)
        {
            printf("%.10d\t\t\t%s\n",p->id,p->name);
            p++;
        }

    }

