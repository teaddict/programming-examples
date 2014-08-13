#include<string.h>
#include<stdlib.h>
#include<stdio.h>

void main()
{

struct info
{
    int id;
    char name[20];
    int age;
};

struct info people[100];

int n,i;
char nm[20];
printf("how many student> ");
scanf("%d",&n);

for(i=0; i<n; i++)
{
    printf("enter id> ");
    scanf("%d",&people[i].id);
    printf("\n");

    printf("enter name> ");
    scanf("%s",people[i].name);
    printf("\n");

    printf("enter age> ");
    scanf("%d",&people[i].age);
    printf("\n");

}

for(i=0; i<n; i++)
{
    printf("ID: %d\n",people[i].id);
    printf("Name: %s\n",people[i].name);
    printf("Age: %d\n",people[i].age);
}

}
