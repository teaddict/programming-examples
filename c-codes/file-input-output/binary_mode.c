#include<string.h>
#include<stdio.h>
#include<stdlib.h>

FILE *p;

void add()
{
    char name[20];
    char id[20];
    int i=0;
    while(!feof)
    printf("enter name>\n");
    scanf("%s",name);

    printf("enter id>\n");
    scanf("%s",id);

    if((p=fopen("new.bin","r+b"))==NULL)
    printf("can not open\n");
    else
    fprintf(p,"%s\t%s\n",name,id);

    fclose(p);

}

void list()
{
    char n[20];
    char i[20];

    if((p=fopen("new.bin","rb"))==NULL)
    printf("can not open\n");
    else
    {
     fscanf(p,"%s\t%s\n",&n,&i);
    }

    printf("name: %s\n",n);
    printf("id: %s\n",i);
}

void main()
{
    char ch;

    add();

    ch=getchar();

    list();


}
