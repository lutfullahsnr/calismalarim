#include <stdio.h>
int main()
//Girilen sayýnýn Armstrong sayýsý olup olmadýðýný ekrana yazdýran program
{
	int sayi, temp, kontrol=0, bas;
	printf("Lutfen bir sayi giriniz...\n");
	scanf("%d",&sayi);
	
	temp=sayi;
	while(temp != 0)
	{
		bas = temp%10;
		kontrol = kontrol + (bas*bas*bas);
		temp = temp/10;
	}
	
	if(kontrol == sayi)
	{
		printf("Bu sayi Armstrong sayisidir:%d",sayi);
	}
	else
	{
		printf("Bu sayi Armstrong sayisi degildir:%d",sayi);
	}
	
	
	
	return 0;
}
