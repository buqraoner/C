#include <stdio.h>
#include <locale.h>

//Mantık İşlemleri(Logic Operators) Homewrk

int main() {
    setlocale(LC_ALL, "Turkish");


    printf("2 adet sayi degeri giriniz.\n");
    int sayi1
    ,   sayi2;

    scanf("%d %d" , &sayi1,&sayi2);

    printf("Girilen sayilarin degeri : %d , %d \n ", sayi1 ,sayi2);

    if ( sayi1 ==sayi2){

        printf("sayilar birbirine esit \n");
    }
    else
        printf("sayilar birbirine esit degil \n");

 if (sayi1 > sayi2){
     printf("%d greater \n "  , sayi1);
 }
     else
         printf("%d greater \n ",sayi2);

    int x = sayi1;
    int y =sayi2;


    if(x<=y){
        printf("Birinci sayi kucuk esittir");
    }



    if(x>=y){
        printf("Birinci sayi büyük eşittir");
    }



















    return 0;
}
