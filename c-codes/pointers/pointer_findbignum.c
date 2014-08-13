//geri dönüş değeri verir,kayıt çıktısı

#include<stdio.h>
#include<stdlib.h>

double* find(double dizi[],int n)
{
    int i;
    double ebd=dizi[0]; //en büyük değer
    double *eba=&dizi[0]; //en büyük adres

    for(i=0; i<n; i++)
    {
        if(dizi[i]>ebd)
        {
            ebd=dizi[i];
            eba=&dizi[i];
        }
    }

    return eba;
}
void main()
{
    double data[4]={1,-5,3,6};
    int i,konum;
    double *p;

    for(i=0; i<4; i++)
    printf("%d\t%f\t%p\n",i,data[i],&data[i]);

    p=find(data,4);
    konum=p-&data[0];
    printf("en büyük deger: %f\n",*p);
    printf("en büyük kayit: %p\n",p);
    printf("en büyük konum: %d\n",konum);

}
