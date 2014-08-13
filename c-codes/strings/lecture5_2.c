#include<stdio.h>
#include<stdlib.h>

void main()
{
    char isim[30];
    int i;

    printf("isim giriniz> ");
    scanf("%s",isim); // & operatörü yok

    printf("\ngirdiginiz isim>\n");
    for(i=0; isim[i]!='\0'; i++) // BOŞLUK OLANA KADAR DEVAM ET DER
    printf("%c",isim[i]);

    printf("\n");
}




