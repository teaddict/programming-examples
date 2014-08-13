#include<stdio.h>
#include<stdlib.h>

void main()
{
    char *pk,k;
    int *pt,t;
    double *pg,g;

    k='a';
    pk=&k;

    t=3;
    pt=&t;

    g=2.9;
    pg=&g;

    printf("önceki adresler\npk=%p\npt=%p\npg=%p\n",pk,pt,pg);

    printf("önceki adresler\npk=%d\npt=%d\npg=%d\n",pk,pt,pg);

    pk++;   // 1 bit değişiır eksi ya da artı değer
    pt++;   // 4 bit değişiır eksi ya da artı değer
    pg++;   // 8 bit değişiır eksi ya da artı değer

    printf("sonraki adresler\npk=%p\npt=%p\npg=%p\n",pk,pt,pg);
    printf("sonraki adresler\npk=%d\npt=%d\npg=%d\n",pk,pt,pg);




}
