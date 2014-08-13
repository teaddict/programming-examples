//kelimenin ilk harifini büyük harfe çevirmek

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int i=0;
    char str[20];

    printf("enter a sentence\n");
    gets(str);

    str[0]=str[0]-32;

    for(i=0; str[i]!=NULL; i++) // \0 olana dek devam et
    {
        if(str[i]==32) // 32 nin ascii değeri = space
        {
            i++;
            str[i]=str[i]-32; // buyuk harfe dönüşür
        }
    }
    puts(str);

}
