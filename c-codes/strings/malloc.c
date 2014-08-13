#include<stdlib.h>
#include<stdio.h>

void main()
{
    int *dizi;
    int eleman_sayisi;
    int i;

    // malloc( ) fonksiyonuyla dinamik olarak
	// dizimizi istedigimiz boyutta yaratiyoruz.
    dizi=malloc(eleman_sayisi*sizeof(int));

	// Eger hafiza dolmussa dizi pointer'i NULL'a
	// esit olacak ve asagidaki hata mesaji cikacaktir.
	if( dizi == NULL )
		printf( "Yetersiz bellek!\n" );

	for( i = 0; i < eleman_sayisi; i++ )
		printf( "%d\n", dizi[i] );

		free(dizi); // dinamik bellekten siler diziyi

}
