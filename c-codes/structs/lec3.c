#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union veri
{
int x;
int y;
}z;


void main()
{
int *xadres,*yadres;

z.x=11;
xadres=&z.x;

printf("%d %d\n",z.x,z.y);

z.y=22;
yadres=&z.y;

printf("%d %d\n",z.x,z.y);

printf("x adres: %x\ny adres: %x\n",xadres,yadres);

}
