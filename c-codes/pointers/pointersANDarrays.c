#include<stdio.h>
#include<stdlib.h>

void main()
{
    int data[3]={1,2,3,4};
    int *p;
    int i;
    for(i=0; i<=3; i++)
    {
        printf("data[%d]: %d\n",i,data[i]);
    }//for
    p=data;
    printf("p=data dedik\n");
    printf("*p nin değeri: %d\n",*p);
    printf("p nin adresi:  %p\n",p);

    p=&data[0];
    printf("p=&data[0] dedik\n");
    printf("*p nin değeri: %d\n",*p);
    printf("p nin adresi:  %p\n",p);

    printf("*p+3 sonucu:%d\n",*p+3);
    printf("*(p+3) sonucu:%d\n",*(p+3));





}
