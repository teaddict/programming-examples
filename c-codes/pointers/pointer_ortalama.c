#include<stdio.h>
#include<stdlib.h>

double av(double dizi[],int n)
{
    double *p,t=0.0;
    int i;

    p=dizi; // p=&dizi[0];

    for(i=0; i<n; i++)
    {
        t+=*(p+i);

    }
    return t/n;

}

/*
double av(double dizi[],int n)
{
double *p;
double t=0.0;

for(p=dizi; p<&data[n]; n++)
t+=*p;

return t/p;
    }
        */

void main()
{
    double data[3];
    double average;
    int i;

    for(i=0; i<3; i++)
    scanf("%lf",&data[i]);

    average=av(data,3);

    printf("the average is: %.2f\n",average);
}

