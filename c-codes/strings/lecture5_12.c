#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char str1[]="my name is neo";
    char token[]=" ";
    char *p;

    p=strtok(str1,token);
    while(p!=NULL)
    {
        puts(p);
        p=strtok(NULL,token);
    }//while

    for(p=strtok(str1,token); p!=NULL; p=strtok(NULL,token))
    {
        puts(p);
    }//for
}
