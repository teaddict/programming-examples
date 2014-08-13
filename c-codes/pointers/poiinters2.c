#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *pointer,x;

    x=33;
    pointer=&x;

    printf("x: %d\n",x);
    printf("*pointer: %d\n",*pointer);
    printf("&x: %p\n",&x);
    printf("pointer:%p\n",pointer);

    *pointer=44;


    printf("x: %d\n",x);
    printf("*pointer: %d\n",*pointer);
    printf("&x: %p\n",&x);
    printf("pointer:%p",pointer);

}
