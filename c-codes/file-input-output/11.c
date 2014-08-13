#include<stdio.h>
#include<stdlib.h>

#define sat 4
#define sut 3

void main()
{
    FILE *kp;
    int a[sat][sut]={2,1,0,3,5,7};
    int b[sat][sut];
    int i,j;

    kp=fopen("matris.bin","wb");
    if(kp==NULL)
    {
        printf("can not open\n");
        exit(0);
    }
    for(i=0; i<sat;i++)
    {
        for(j=0; j<sut; j++)
        {
            fwrite(&a[i][j],sizeof(int),1,kp);
        }
    }
    fclose(kp);

    kp=fopen("matris.bin","rb");
    if(kp==NULL)
    {
        printf("can not open\n");
        exit(0);
    }
    for(i=0; i<sat; i++)
    {
        for(j=0; j<sut; j++)
        fread(&b[i][j],sizeof(int),1,kp);

    }

    for(i=0; i<sat; i++)
    {
        for(j=0; j<sut; j++)
        printf("%d\t",b[i][j]);

        printf("\n");
    }

    fclose(kp);
}

