#include<stdio.h>

void main()
{
    FILE *open;

    open=fopen("/etc/passwd","r");

    if(open==NULL)
    {
        printf("not opened\n");
        exit(1);
    }
}
