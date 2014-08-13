#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *p;
    int n,i;

    printf("how many id> ");
    scanf("%d",&n);

    p=(int *)calloc(n,sizeof(int));
    for(i=0; i<n; i++)
    {
        printf("enter id>\n");
        scanf("%d",&p[i]);
    }

    printf("\n\n#########\nID\n\n");
    for(i=0; i<n; i++)
    printf("%d\n",p[i]);

}
