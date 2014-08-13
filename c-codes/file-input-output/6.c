//fgetc ve fputc ile bir dosyayi kopyalamak

#include<stdio.h>
#include<stdlib.h>

#define max 80

void main()
{
    FILE *fsource,*fdest;
    char source[max],dest[max];
    int ch;

    printf("source file:");
    gets(source);
    printf("destination file:");
    gets(dest);
    if((fsource=fopen(source,"r"))==NULL)
    {
        printf("can not open\n");
        exit(1);
    }
    if((fdest=fopen(dest,"w"))==NULL)
    {
        printf("can not open\n");
        exit(1);
    }
    while((ch=fgetc(fsource))!=EOF) //harf harf kopyaladı
    {
        fputc(ch,fdest);
    }

    fclose(fsource);
    fclose(fdest);
}
