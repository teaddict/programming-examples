/* strtod: baştaki double sayı kısmını ayırır
/* strtol: baştaki long sayı kısmını ayırır
/* strtoul: baştaki unsigned long sayı kısmını ayırır */

#include<stdio.h>
#include<stdlib.h>

void main()
{
    double d;
    long a;
    char *string="51.245632 are admitted";
    char *strptr;
    char *strptr1;

    d=strtod(string,&strptr);
    printf("\ndouble after dtrtod: %f\n",d);
    printf("string after strtod: %s\n\n",strptr);

    string="-1234567abc";
    a=strtol(string,&strptr1,0);
    printf("\nlong after strtol: %ld\n",a);
    printf("string after strtol: %s\n",strptr1);
}
