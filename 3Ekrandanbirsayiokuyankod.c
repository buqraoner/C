#include <stdio.h>

int main() {

    printf("Degisken degerini giriniz.\n");
    int DegiskenTutucu;
   DegiskenTutucu = getchar();

    printf( "Girdiginiz degiskenin degeri : %c \n",DegiskenTutucu);


    printf("Yapilan islemi onayliyor musun Y/N : \n");
    char KarakterTutucu;
    KarakterTutucu = getche();
    printf("Cevabiniz : %s",KarakterTutucu);






    return 0;
}
