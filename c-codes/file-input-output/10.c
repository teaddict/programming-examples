#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp;

    float f=12.25;

    if((fp=fopen("test.bin","wb"))==NULL)
    {
        printf("can not open\n");
    }
    fwrite(&f,sizeof(float),1,fp);
    fclose(fp);

}
