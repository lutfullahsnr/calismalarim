#include <stdio.h>
int main()
//Gönderilen 2 sayý arasýndaki asal sayýlarý yazdýran fonksiyon
{
	int a,b,i,j,bolen;
	bolen=0;
	printf("Iki adet farkli sayi giriniz...\n");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		for(i = a+1 ; i <= b-1; i++)
		{	
		bolen=0;								
			for(j=1 ; j <=i ; j++)
			{
				
				if(i % j ==0)
				{
					bolen=bolen+1;
		 		}
				if(i==2)
				{
					printf("%d sayisi asal sayi degildir...\n",i);
				}
			
			}
			if(bolen<=2)
			{	
				printf("%d sayisi asal sayidir...\n",i);
			}
			else
			{
					printf("%d sayisi asal sayi degildir...\n",i);
			}
			a++;
		}
		
			
	}
	else
	{
		for(i = b+1 ; i <= a-1; i++)
		{	
		bolen=0;								
			for(j=1 ; j <=i ; j++)
			{
				
				if(i % j ==0)
				{
					bolen=bolen+1;
		 		}
				if(i==2)
				{
					printf("%d sayisi asal sayi degildir...\n",i);
				}
			
			}
			if(bolen<=2)
			{	
				printf("%d sayisi asal sayidir...\n",i);
			}
			else
			{
					printf("%d sayisi asal sayi degildir...\n",i);
			}
			b++;
		}
	}
	return 0;
}
