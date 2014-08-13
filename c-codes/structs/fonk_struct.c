#include<stdio.h>
#include<stdlib.h>

struct tarih
{
    int gun,ay,yil;
};

void view(struct tarih x)
{
    printf("tarih: %d.%d.%d\n",x.gun,x.ay,x.yil);
}

void main()

{
    struct tarih n;

    n.gun=01;
    n.ay=05;
    n.yil=2013;

    view(n);
}
