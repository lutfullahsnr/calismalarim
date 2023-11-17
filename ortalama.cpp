#include <stdio.h>
int main()
//N adet sayının toplamı ve ortalaması
{
	int i,n;
	float ort,sayi,toplam;
	toplam=0;
	printf("Lutfen gireceginiz sayi adetini giriniz...\n");
	scanf("%d",&n);
	for(i=1;i <= n;i++)
	{
		printf("Lutfen bir sayi giriniz...\n");
		scanf("%f",&sayi);
		toplam=toplam+sayi;
	}
	ort=toplam/n;
	printf("Girdiginiz sayilarin toplami %.2f \n",toplam);
	printf("Girdiginiz sayilarin ortalamasi %.2f",ort);
	
	
	
	return 0;
}
