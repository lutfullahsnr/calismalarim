#include <stdio.h>
int main()
{
     int a,b;
     printf("Lutfen a ve b degerlerini sirasiyla giriniz.\n");
     scanf("%d%d", &a,&b);

     if (a >= b)
     {
          if(a == b)
          {
               printf("Sonuc: %d = %d",a,b);
          }
          else
          {
               printf("Sonuc: %d > %d",a,b);
          }
     }
     else
     {
          printf("Sonuc: %d < %d",a,b);
     }









     return 0;
}