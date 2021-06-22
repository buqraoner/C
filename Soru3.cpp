#include <iostream>
#include <stdlib.h>


int main (){
 

{
	
	int dizi [3][3] = {{},{},{}};
	for (int i =0;i<3;i++)
	{
		for (int j =0;j<3;j++)
		{
		    printf("%d. satirin %d. sutunu giriniz:",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
		
	}
		for (int i =0;i<3;i++)
	{
		for (int j =0;j<3;j++)
		{
		 printf("%d",dizi[i][j]);
		}
		printf("\n");
	}
int dizitoplam;
	dizitoplam = dizi[0][0] + dizi[0][1] +dizi[0][2]+
	dizi[1][0] + dizi[1][1] + dizi[1][2]+
	dizi[2][0]+ dizi [2][1]+dizi[2][2];

	
	
	
	printf(" dizinin elemanlarýnýn toplami: %d ",dizitoplam);
	
	delay (100);
	return 0;
	
	
	
	 }
	
		
	
}


