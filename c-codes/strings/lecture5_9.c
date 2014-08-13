#include<stdlib.h>
#include<stdio.h>

void main()
{
    char x[]="happy birthday to you";
    char y[25],z[15];

    printf("\n%s%s\n%s%s\n",
           "the string in array x is: ",x,
           "the string in array y is: ",strcpy(y,x));

    strncpy(z,x,14);
    z[15]='\0';

    printf("\nthe string in array z is:%s\n",z);
}
