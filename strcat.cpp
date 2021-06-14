#include <stdio.h>
#include<string.h>
int main( void)
{

    char ad[15],soyad[15],numara[12];
    char numara_ad_soyad[42];
    printf("\n");
    printf( "Ogrenci numarasini giriniz: " );        scanf( "%s", numara);
    printf( "Adini giriniz: " );                     scanf( "%s", ad);
    printf( "Soyadini giriniz: " );                  scanf("%s",soyad);
    strcat( numara_ad_soyad, ad );
    strcat( numara_ad_soyad, " " );
    strcat( numara_ad_soyad, numara );
    
    strcat( numara_ad_soyad, " " );
    strcat( numara_ad_soyad, soyad );
    printf( "\n" );
    printf( "Ogrenci numarasi Adi Soyadi: %s\n", numara_ad_soyad );
    return 0;

}
