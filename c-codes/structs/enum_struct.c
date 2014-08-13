#include<stdio.h>
#include<stdlib.h>

enum colors {bla=1,pur,blu,red,yel,pin,whi,gr,gre};


void main()
{

    enum colors col;        // ismini kısalttık

    const char *colorname[]={"","black","purple","blue","red","yellow","pink","white","grey","green"};


    for(col=bla; col<=gre; col++)
    {
        printf("%2d %10s\n",col,colorname[col]);
    }
}
