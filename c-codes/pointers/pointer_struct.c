#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct test
{
    char name[10];
    char id[10];
}test;

void main()
{
    struct test x;
    struct test *p=&x;

    printf("enter a name>\n");
    scanf("%s",p->name);
    printf("enter an id>\n");
    scanf("%s",p->id);

    printf("\n\n%s",p->name);
    printf("\n%s",p->id);

}
