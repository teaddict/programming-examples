#include<stdio.h>
#include<stdlib.h>

struct card
{
    char *face;
    char *suit;
};

void main()
{
    struct card Acard;
    struct card *ptrcard;

    Acard.face="ali";
    Acard.suit="veli";

    ptrcard=&Acard;

    printf("%s ve %s\n%s ve %s\n",Acard.face,Acard.suit,ptrcard->face,ptrcard->suit);

}
