#include <stdio.h>
int main()
{
	int sayi,i,bolen;
	bolen=0;
	printf("Lutfen bir sayi giriniz...\n");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		if(sayi % i ==0)
		{
			bolen=bolen+1;
		}
		
	}
		if(sayi==2)
		{
			printf("Girdiginiz sayi asal sayi degildir");
		}
		else if(bolen<=2)
		{
			printf("Girdiginiz sayi asal sayidir...");
		}
		else
		{
			printf("Girdiginiz sayi asal sayi degildir");
		}
	
	
	return 0;
}
