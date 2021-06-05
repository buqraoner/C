// Klavyeden üç sayı alarak mantık bağlaçlarını kullanan örnek bir kod yazınız.
// Örneğin okunan sayılar a, b ve c olsun. Sırasıyla, aşağıdaki soruları cevaplayan kodu yazınız
// a'nın b ve c arasında olup olmadığını,
// a'nın b'ye eşit ve aynı zamanda c'den küçük olup olmadığını
// a'nın b'den veya c'den büyük olup olmadığını
// üç sayının birbirine eşit olup olmadığını
// kontrol edip ekrana basan kodu yazınız.
#include <stdio.h>
int main() {
    printf("3 adet sayi giriniz.\n");
    int a,b,c;

    scanf("%d %d %d", &a,&b,&c);

    printf("Girdiginiz sayilar : %d, %d,%d  ",a,b,c);
    printf("\n \n");

    if (a>b && a<c){
        printf("A,b ve c arasinda bir sayi \n");
    }

    else{
        printf("A,b ve c arasinda bir sayi degil \n");}

    if (a=b && a<c){
        printf("A,b'ye esit c'den kucuk \n");
    }
    if(a>b && a>c ){
        printf("A,b ve c'den buyuk \n");
    }
    else{
        printf("A,b veya c'den buyuk  degil \n");
    }
    if(a==b && a==c){
        printf("Tum sayılar birbirine esit \n");
    }
    else{
        printf("Tumsayılar birbirine esit degil \n");
    }






    return 0;
}
