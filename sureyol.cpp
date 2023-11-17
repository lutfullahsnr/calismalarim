#include <stdio.h>
int main()
//Klavyeden mesafe ve gitmek istenilen süre giriliyor.Buna göre istenilen sürede gitmek için gereken ortalama hız
{
	int mesafe;
	float sure,hiz;
	printf("Lutfen gideceginiz yolun mesafesini kilometre turunden giriniz...\n");
	scanf("%d",&mesafe);
	printf("Lutfen gitmek istediginiz sureyi saat turunden giriniz...\n");
	scanf("%f",&sure);
	hiz=mesafe/sure;
	printf("Istediginiz surede varis noktasina ulasmak icin gereken ortalama hiz; %f km/h",hiz);
	
	return 0;
}
