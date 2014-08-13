#include<string.h>
#include<stdlib.h>

void main()
{
    char x[]="happy birthday to you";
    char y[25],z[25];

    printf("\nthe string in array x is:%s\n the string in array y is:%s\n",x,strcpy(y,x));

           strncpy(z,x,14); // n burda kaç karakter kopyalayacağını atar
           z[14]='\0';
           printf("\nthe string in array z is: %s",z);
}
