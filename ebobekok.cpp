#include <stdio.h>
int main ()
{
	int sayi1, sayi2, ebob, ekok,i;
	printf("Lutfen bir sayi giriniz...\n");
	scanf("%d",&sayi1);
	printf("Lutfen bir sayi giriniz...\n");
	scanf("%d",&sayi2);
	for(i=2 ;i <= sayi1 && i <= sayi2 ;i++)
		{
			if(sayi1 % i == 0 && sayi2 % i == 0)
			{
			printf("Ortak bolenler:%d \n",i);
			ebob=i;
			}
			
		}
	ekok=sayi1 * sayi2 / ebob;
	printf("Iki sayinin ebob'u %d \n",ebob);
	printf("Iki sayinin ekok'u %d",ekok);
	
	
	return 0;
}
