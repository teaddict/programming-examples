#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char txt[50];
    char *searchPTR="test";
    char *swap;
    int i=0;

    gets(txt);

    swap=strstr(txt,searchPTR);
    printf("%s\n",swap);


    swap=strstr(swap+1,searchPTR);
    printf("%s\n",swap);



}
