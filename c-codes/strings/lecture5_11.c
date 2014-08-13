#include<stdio.h>
#include<stdlib.h>

int strlen(const char *);
char *strcpy(char *,const char *);
char *strcat(char *,const char *);

void main()
{
    char s1[20]="happy";
    char s2[]="new year";
    char s3[40]="";
    char s4[20]="happy 2011";

    printf("\ns1=%s\ns2=%s\n",s1,s2);
    printf("--------------------------\n");
    printf("strcat(s1,s2)=%s\n",strcat(s1,s2));
    printf("\ns1=%s\ns2=%s\n",s1,s2);
    printf("--------------------------\n");

    printf("strncat(s3,s1,6)=%s\n",strncat(s3,s1,6)); // s3 ilk 6 karakteri= s1 in ilk 6 karakteri olur
    printf("\ns3=%s\n",s3);
    printf("--------------------------\n");

    printf("strcat(s3,s1)=%s\n",strcat(s3,s1));
    printf("\ns3=%s\n",s3);
    printf("--------------------------\n");

    printf("strncpy(s3,s4,10)=%s\n",strncpy(s3,s4,10));
    printf("\ns4=%s",s4);
    printf("\ns3=%s",s3);

    printf("strlen(s1)=%d\n",sterlen(s1));
    printf("sterlen(s2)=%d\n",sterlen(s2));
    printf("sterlen(s3)=%d\n",sterlen(s3));
    printf("sterlen(s4)=%d\n",sterlen(s4));

}

int sterlen(const char *str)
{
    int len=0;

    while(*str++)
    len++;

    return len;
}

char *strcpy(char *str1,const char *str2)
{
    char *p=str1;

    while(*str2)
    {
        *p++=*str2++;
    }
    *p='\0';
    return str1;
}

char *strcat(char *str1,const char *str2)
{
    char *p=str1;

    while(*p)
    {
        p++;
    }

    while(*str2)
    {
        *p++=*str2++;

    }
    *p='\0';

    return str1;
}
