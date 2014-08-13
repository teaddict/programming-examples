#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char txt[50];
    char *ptxt;


    int c='a';

    gets(txt);
    ptxt=txt;

    printf("ilk \"a\" bulunan yer: %s\n",strchr(txt,c));


    printf("son \"a\" bulunan yer: %s\n",strrchr(txt,c));

}
