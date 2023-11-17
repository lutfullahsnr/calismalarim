#include <stdio.h>
int main()
//Yýldýzlarla dik üçgen oluþturma
{
	int i,j;
	int adet=1;
	for(i=0;i < 10;i++)
	{
		for(j=0;j < adet;j++)
		{
			printf("*");
		}
		printf("\n");
		adet++;
	}
	return 0;
}
