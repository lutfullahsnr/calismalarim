#include <stdio.h>
int main()
{
	int mesafe;
	float sure,hiz;
	printf("Lutfen gideceginiz yolun mesafesini kilometre turunden giriniz...\n");
	scanf("%d",&mesafe);
	printf("Lutfen gitmek istediginiz sureyi saat turunden giriniz...\n");
	scanf("%f",&sure);
	hiz=mesafe/sure;
	printf("Istediginiz surede varis noktasina ulasmak icin gereken hiz; %f km/h",hiz);
	
	return 0;
}
