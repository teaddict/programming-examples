#include<stdio.h>
#include<stdlib.h>

void main()
{
    int dizi[3];
    int *pdizi[3]={NULL,NULL,NULL};
    int i;

    for(i=0; i<3; i++)
    dizi[i]=i*i;

    for(i=0; i<3; i++)
    pdizi[i]=&dizi[i];

    for(i=0; i<3; i++)
    printf("%d\t%p\n",*pdizi[i],pdizi[i]);

    for(i=0; i<3; i++)
    scanf("%d",pdizi[i]);


    for(i=0; i<3; i++)
    printf("%d\t%p\n",*pdizi[i],pdizi[i]);

}
