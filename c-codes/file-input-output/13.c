#include<stdio.h>
#include<stdlib.h>

#define max 15

struct student
{
    int id;
    char first_name[max];
    char last_name[max];
    float grade;
};

void main()
{
    FILE *fp;
    int i;

    struct student s={45,"fatih","metin",90};

    if((fp=fopen("students.dat","w"))==NULL)
    {
        printf("can not open\n");
    }
    else
    {
        for(i=1; i<=5; i++)
        {
            fwrite(&s,sizeof(struct student),1,fp);
        }
    }
    fclose(fp);
}
