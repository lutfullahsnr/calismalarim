#include <stdio.h>
int main()
/*
Kullanýcýdan alýnan sayý uzunluðunda fibonacci 
dizisini ekrana yazdýran programýn C kodunu yazýnýz.
*/
{
	int sayi1 = 0,sayi2 = 1,limit,i,temp;
	printf("Fibonacci dizisinde görmek istediginiz terim sayisini giriniz...\n");
	scanf("%d",&limit);
	
	for(i=1;i <= limit;i++)
	{
		printf(",%d",sayi1);
		temp = sayi1 + sayi2;
		sayi1 = sayi2;
		sayi2 = temp;
		
	}
	
	
	
	return 0;
}
