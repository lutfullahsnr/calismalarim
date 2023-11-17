#include <stdio.h>
int main()
//Girilen iki sayının büyüklük karşılaştırması
{
     int a,b;
     printf("Lutfen sirasiyla a ve b sayilarini giriniz.\n");
     scanf("%d%d" ,&a, &b);

     if(a == b)
     {
          printf("Sonuc : %d = %d" ,a,b);
     }
     else if(a > b)
     {
          printf("Sonuc : %d > %d" ,a,b);
     }
     else
     {
          printf("Sonuc : %d < %d",a,b);
     } 
     
     return 0;
}
