//recursive olarak cümlenin tersi

#include<stdio.h>
#include<stdlib.h>

void reverse(char *);

void main()
{
    char sentence[80];

    printf("enter a line of text>\n");
    gets(sentence);

    printf("\nthe line printed backwards is>\n");
    reverse(sentence);

}

void reverse(char *s)
{
    if(s[0]=='\0')
    return;
    else
    {
        reverse(&s[1]);
        putchar(s[0]);

    }
}
