#include <stdio.h>
// 100'den 0'a kadar 13'e tam bölünebilen sayıları ekrana yazdırınız (büyükten küçüğe).
int main() {


    for (int i = 100; i >= 0; i--){
   if (i %13 == 0 ){
       printf("%d ",i);
   }

    }
}









