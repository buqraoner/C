#include<stdio.h>
#include<stdlib.h>
#include <iostream>
int main( )
{
	
	
FILE *personel;


char ad[30],soyad[30],dogumyeri[30];
int n=3;
int i;
personel=fopen("personel.txt","w");
for(i=1;i<=n;i++ )


{
printf("%d. Kisinin Adi : ",i); scanf("%s",ad);

printf("%d. Kisinin Soyadi : ",i); scanf("%s",soyad);

printf("%d. Kisinin dogumyeri : ",i); scanf("%s",dogumyeri);


printf("\n");


fprintf(personel,"%30s %30s %30s \n",ad,soyad,dogumyeri);



}
fclose(personel);
printf("%d",n);printf(" kisinin bilgileri  dosyaya kaydedildi");
return 0;
}
