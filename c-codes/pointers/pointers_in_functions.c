#include<stdio.h>
#include<stdlib.h>


void f2(int *);

void main()
{
    int k;

    k=3;

    printf("k nin degeri: %d\n",k);
    f2(&k);
    printf("k nin f2 fonksiyonuna gittikten sonraki\ndegeri:%d\n",k);
}
void f2(int *n)
{
    *n=5;
}
