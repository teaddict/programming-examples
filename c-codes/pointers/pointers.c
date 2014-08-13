#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[3]={1,9,7,5};
    int *x,*y;
    int b=12;

    x=a;

    printf("x=a : %d\n",*x++);

    printf("(*x++) : %d\n",*x);
    printf("*x+2 : %d\n",*x+2);

    y=&b;

    printf("y=b : %d\n",*y);

    *x=*y;

    printf("*x=*y : %d\n",*x);
    printf("a[1]  : %d\n",a[1]);

    x=&b;

    b=5;
    *y=3;

    printf("x=y : %d\n",*x);
    printf("a[1]  : %d\n",a[1]);
    printf("b   : %d\n",b);
    printf("*y  : %d\n",*y);
}



