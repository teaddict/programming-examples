#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a=1;
    int b=2;
    int *p=&a;
    int **pp=NULL;


    printf("%d\n",a);
    printf("%d\n",b);



    pp=&p;
    *pp=&b;

    printf("%d\n",a);
    printf("%d\n",b);
    **pp=a;

  //  **pp=&b;


    printf("%d\n",a);
    printf("%d\n",b);


}
