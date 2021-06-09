//Klavyeden 3 sayı okuyarak bu sayılardan en büyüğünü veya en küçüğünü ekrana yazan kodu yazınız.

#include <stdio.h>
int karsilastirMax(int a,int b,int c){
    if(a>b && a>c)
    {
        printf ("en buyuk : %d\n ",a);
    }
    else if (b>c){
        printf("en buyuk : %d\n",b);
    }
    else
    {
        printf("en buyuk : %d \n",c);
    }

}
int main() {
    int sayi1;
    int sayi2;
    int sayi3;
    printf("Birinci sayiyi giriniz\n");
    scanf("%d", &sayi1);
    printf("Ikinci sayiyi giriniz\n");
    scanf("%d", &sayi2);
    printf("Ucuncu sayiyi giriniz\n");
    scanf("%d", &sayi3);
    if(sayi1<sayi2 && sayi1<sayi3)
    {
        printf ("en kuyuk : %d \n ",sayi1);
    }
    else if (sayi2<sayi3){
        printf("en kuyuk : %d \n",sayi2);
    }
    else
    {
        printf("en kuyuk : %d \n ",sayi3);
    }

    int max = karsilastirMax(sayi1,sayi2,sayi3);
    printf(" %d  ",max);



    return 0;
}
