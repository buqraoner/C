#include <stdio.h>

int main() {
    int sayi1,sayi2;
    printf("Lutfen birinci sayiyi giriniz :\n");
    scanf("%d",&sayi1);
    printf("Lutfen ikinci sayiyi giriniz :\n");
    scanf("%d",&sayi2);
    printf("Toplam = %d \n  Cikan = %d \n Carpim = %d \n bolum = %d \n \n",sayi1+sayi2,sayi1-sayi2,sayi1*sayi2,sayi1/sayi2);
//2
    int toplam,cikan,bolum,carpm;
    toplam = sayi1+sayi2;
    cikan = sayi1-sayi2;
    bolum = sayi1/sayi2;
    carpm =sayi1*sayi2;
    printf("%d %d %d %d",toplam,cikan,bolum,carpm);



    return 0;
}
