#include <stdio.h>
#include <stdlib.h>

int main(){

    int dizi[10];
    int adet = 10, sayac = 0;

    printf("Dizinin elemanlarini giriniz :");
    for(int i=0; i<adet; i++){

        scanf("%d", &dizi[i]);
        if(dizi[i]<0){
            printf("Lutfen pozitif  sayi  giriniz!\n");
            i--;

        }


    }

    for(int i=0; i<adet; i++){
        sayac = 1;
        for(int j=i+1; j<adet; j++){
            if(dizi[i] == dizi[j]){
                sayac++;
                dizi[j] = -1;
            }
        }
        if(dizi[i] != -1)
            printf("%d sayisindan\t  %d tane\t  \n", dizi[i], sayac);
    }


    printf("\n");
    system("pause");
    return 0;
}