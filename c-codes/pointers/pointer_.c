#include<stdio.h>
#include<stdlib.h>

int change(int *x,int*y,int *z)
{

    *x=*y;
    *z=*x+2;

}

void main()
{
    int *y,*z,*x;
    int a=1,b=2,c=3;

    x=&a;
    y=&b;
    z=&c;


    change(x,y,z);
    printf("x:%d y:%d z:%d\n",a,b,c);

    change(z,x,y);
    printf("x:%d y:%d z:%d\n",a,b,c);

    change(x,x,y);
    printf("x:%d y:%d z:%d\n",a,b,c);


    change(y,x,z);
    printf("x:%d y:%d z:%d\n",a,b,c);


}
