#include<stdio.h>


char *ReadLine(char *str)
{
    char ch;
    char *p=str;

    while((ch=getchar()) != '\n')
    {
        *p++=ch;

    }

    *p='\0';
    return str;
}

void main()
{
    char str[80];

    ReadLine(str);
    printf("Line of input> %s\n",str);


}
