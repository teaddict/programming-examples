#include<string.h>
#include<stdlib.h>
#include<stdio.h>

void main()
{
    char c;
    int x;
    while(c=getchar()!='0')
    {
    x=atoi(&c);
    switch(x)
    {
        case 'a': printf("is a vowel.\n"); break;

        case 'e': printf("is a vowel.\n"); break;

        case 'i': printf("is a vowel.\n"); break;

        case 'u': printf("is a vowel.\n"); break;

        case 'ü': printf("is a vowel.\n"); break;

        case 'o': printf("is a vowel.\n"); break;

        case 'ö': printf("is a vowel.\n"); break;

        default: printf("is a constant.\n"); break;
    }

    }

}
