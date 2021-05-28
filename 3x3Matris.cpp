 #include <iostream>
 #include <stdio.h>
 
 
 int main ()
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
	int sayi1;
	int sayi2;
	sayi1 = dizi[0][0] + dizi[2][2] +dizi [1][1];
	sayi2 = dizi[0][2] + dizi[2][0] + dizi[1][1];
	printf(" dizinin kösegenlerinin toplami: %d ve %d ",sayi1,sayi2);
	
	
	return 0;
	
	
	
	 }
