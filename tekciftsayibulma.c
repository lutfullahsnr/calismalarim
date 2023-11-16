#include <stdio.h>
int main()
{
     int x;
     printf("Lutfen bir sayi giriniz...");
     scanf("%d", &x);

     if(x%2 == 1)
     {
          printf("Girdiginiz sayi tek bir sayidir.");
     }
     else
     {
          printf("Girdiginiz sayi cift bir sayidir.");
     }








     return 0;
}