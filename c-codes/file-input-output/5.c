/* bir dosyayı fgets fonksiyonuyla satır satır ekrana yazan program */
#include<stdio.h>
#include<stdlib.h>

#define max 80
#define bufsize 100

void main()
{
    FILE *f;

    char s[max];
    char buf[bufsize];

    printf("dosya:");
    gets(s);
    if((f=fopen(s,"r"))==NULL)
    {
        printf("can not open file\n");
        exit(0);
    }

    while(fgets(buf,bufsize,f)!=NULL)
    {
        printf("%s",buf);
    }

    fclose(f);
}
