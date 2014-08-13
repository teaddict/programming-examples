#include<stdio.h>
#include<stdlib.h>

void main()
{
    struct
    {
        int i;
        char c[4];
    }s;

    union
    {
        int i;
        char c[4];
    }u1;

    union
    {
        int i;
        char c;
        double d;
    }u2;

    s.c[0]=1;
    s.c[1]=2;
    s.c[2]=3;
    s.c[3]=4;
    s.i=0x12345678;

    printf("%x %x %x %x\n",s.c[0],s.c[1],s.c[2],s.c[3]);
    printf("%x\n",s.i);

    u1.c[0]='1';
    u1.c[1]='2';
    u1.c[2]='3';
    u1.c[3]='4';

    printf("%x-%x-%x-%x\n", u1.c[0], u1.c[1], u1.c[2], u1.c[3]);

    u1.i=0x12345678; //u1.c de değişir
    printf("%x-%x-%x-%x\n", u1.c[0], u1.c[1], u1.c[2], u1.c[3]);


    u2.i=8;//4byte değişir sadece
    printf("\n");
printf("%d\n",u2.i);
printf("%c\n",u2.c);
printf("%f\n",u2.d);

u2.c='a'; //1byte değişir
printf("\n");
printf("%d\n",u2.i);
printf("%c\n",u2.c);
printf("%f\n",u2.d);


u2.d=3.0;//8byte değişir
printf("\n");
printf("%d\n",u2.i);
printf("%c\n",u2.c);
printf("%f\n",u2.d);

}
