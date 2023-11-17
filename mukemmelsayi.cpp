#include <stdio.h>
int main()
{
	int sayi ,i ,toplam;
	toplam = 0;
	printf("Lutfen bir sayi giriniz...\n");
	scanf("%d",&sayi);
	for(i=1;i<sayi;i++)
	{
		if(sayi % i==0)
		{
			toplam=toplam+i;
		}	
	}
	if(toplam==sayi)
	{
		printf("Girdiginiz sayi mukemmel sayidir...");
	}
	else
	{
		printf("Girdiginiz sayi mukemmel sayi degildir");
	}
	return 0;
}
