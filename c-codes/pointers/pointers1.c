#include<stdio.h>
#include<stdlib.h>

void main()
{
    char *p;
    int i=0,n,se_id,flag=0;
    char *x;
    printf("how many id>\n");
    scanf("%d",&n);

    p=(char*)calloc(n,10);
    x=p;
    for(i=0; i<n; i++)
    {
        printf("enter id:\n");
        scanf("%s",&p[i]);
    }

    for(i=0; i<n; i++)
    {

        printf("\n");
        puts(x);
        *x++;

    //printf("id : %s\n",*x++);

    }
}
