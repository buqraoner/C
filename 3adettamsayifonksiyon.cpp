/* üç tamsayýnýn toplamýný bulan fonksiyon*/
#include <stdio.h>
#include <stdlib.h>

int topla(int *a , int *b, int *c)
{
    int toplam;
    toplam=0;
    toplam=*a+*b+*c;
}

int main()
{
    int sayi1,sayi2,sayi3;
    printf("3 adet tam sayi giriniz:");    scanf("%d%d%d",&sayi1,&sayi2,&sayi3 );

    int sonuc=topla(&sayi1,&sayi2,&sayi3);
    printf("\n");
    printf("%d+%d+%d=%d",sayi1,sayi2,sayi3,sonuc);
}

