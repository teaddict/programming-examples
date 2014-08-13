#include<stdio.h>
#include<stdlib.h>

void main()
{
    struct simple
    {
        int i;
        char e;
        float f;
    };

    struct simple y;

    printf("the address of y.i: %x\n",&y.i);

    printf("the address of y.e: %x\n",&y.e);

    printf("the address of y.f: %x\n",&y.f);
}
