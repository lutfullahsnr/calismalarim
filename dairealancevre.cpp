#include <stdio.h>
int main()
//Klavyeden girilen işlem türüne göre dairenin çevre veya alanını hesaplama
{
	int yaricap,islem;
	float pi=3.14;
	float sonuc;
	printf("Dairenin yaricapini giriniz...");
	scanf("%d",&yaricap);
	printf("1:Cevre, 2:Alan olacak sekilde islem turunuzu giriniz");
	scanf("%d",&islem);
	if (islem=1)
	{
		sonuc=(2*pi*yaricap);
		printf("%f",sonuc);
	}
	else if(islem=2)
	{
		sonuc=(pi*yaricap*yaricap);
		printf("%f",sonuc);
	}
	else
	{
		printf("Hatali islem girdiniz...");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
