#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum satis_durumu {satilmadi,satildi} sat;

typedef struct araba
{
    int satis;

    union
    {
        double fiyat;
        char marka[10];
    }bilgi;

};
void main()
{
    int i;

struct araba arac[2];
arac[0].satis=0;
strcpy(arac[0].bilgi.marka,"Devrim");
arac[1].satis=1;
arac[1].bilgi.fiyat=10.000;

    for(i=0; i<2; i++)
    {
        if(arac[i].satis==satilmadi)
        {
            printf("marka: %s\n",arac[i].bilgi.marka);
        }
        else
        printf("Satis fiyati: %f\n",arac[i].bilgi.fiyat);
    }
}
