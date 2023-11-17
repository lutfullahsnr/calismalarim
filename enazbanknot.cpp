#include <stdio.h>
int main()
//Girilen paranın 10-20-50-100luk banknotlarla kullanılacak en az banknot sayısını bulma
{
	int yuz,elli,yirmi,on,sayi,temp,banknot;
		printf("Lutfen bir sayi giriniz...");
		scanf("%d",&sayi);
			yuz=(sayi/100);
				temp=(sayi-yuz*100);
			elli=(temp/50);
				temp=(temp-elli*50);
			yirmi=(temp/20);
				temp=(temp-yirmi*20);
			on=(temp/10);
				banknot=(yuz+elli+yirmi+on);
		printf("En az banknot: %d",banknot);
	
	return 0;
}
