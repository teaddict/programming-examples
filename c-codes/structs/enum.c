#include<stdio.h>
#include<stdlib.h>

enum boolean{FALSE,TRUE}; // 0 ve 1 değeri oldu
int tek(int n)
{
    return n%2;
}
void main()
{
    enum boolean sonuc;
    int x;

    printf("enter a num> ");
    scanf("%d",&x);

    sonuc=tek(x);

    if(sonuc==TRUE)
    puts("Tek sayidir\n");
    else
    puts("Cift sayidir.\n");

}
