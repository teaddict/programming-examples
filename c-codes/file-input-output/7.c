#include<stdio.h>
#include<stdlib.h>

#define sat 4
#define sut 3

void main()
{
    FILE *kp;
    int a[sat][sut];
    int i,j;

    kp=fopen("matris.dat","w");
    if(kp==NULL)
    {
        exit(1);
    }
    for(i=0; i<sat; i++)
    {
        for(j=0; j<sut; j++)
        {
            fprintf(kp,"%d\t",i+j); //matris.dat dosyasına yazdırdık
        }
        fprintf(kp,"\n");
    }
    fclose(kp);

    kp=fopen("matris.dat","r");
    if(kp==NULL)
    {
        exit(1);
    }
    for(i=0; i<sat; i++)
    {
        for(j=0; j<sut; j++)
        {
            fscanf(kp,"%d",&a[i][j]); //matris.dat dosyasından a arrayine atadık değerleri
        }
    }
    fclose(kp);

    for(i=0;i<sat; i++)
    {
        for(j=0; j<sut; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}
