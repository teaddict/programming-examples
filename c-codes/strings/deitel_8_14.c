#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char t_num[];
    char *tokenptr;

    printf("enter the phone number:\n");
    gets(t_num);

    tokenptr=strtok(t_num," ");
    printf("%s ",tokenptr);
    tokenptr=strtok(t_num," ");


}
