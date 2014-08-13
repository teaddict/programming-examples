#include<stdio.h>
#include<stdlib.h>

#define max 80

void main()
{
    FILE *f;

    int i;

    if((f=fopen("data.txt","w"))==NULL)
    {
        printf("can not open\n");
        exit(1);
    }

    for(i=0; i<10; i++)
    {
        fprintf(f,"sayi=%d\n",i);
    }

    fclose(f);
}
