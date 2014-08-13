#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i;

    typedef struct birth
    {
        int gun,ay,yil;
    };

    typedef struct names
    {
        char name[15];

        struct birth tarih; // Yapi icinde bir baska yapiyi
                            // kullanmak mumkundur. dogum_tarihi
		                    // yapisindan 'tarih' adinda bir
		                    // degisken tanimlaniyor.
    };

    struct names kisi[3]={"F.M",{15,3,1996},
                "E.K",{13,3,1998},
                "Henry",{25,4,1320}
                };

    for(i=0; i<3; i++)
    {
        printf("name: %s\n",kisi[i].name);
        printf("birth: %d.%d.%d\n",kisi[i].tarih.gun,kisi[i].tarih.ay,kisi[i].tarih.yil);
    }
}
