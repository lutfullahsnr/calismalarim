#include <stdio.h>
int main()
{
     int yas;
     printf("Lutfen yasinizi giriniz...");
     scanf("%d", &yas);

     if(yas >= 18)
     {
          printf("Yasal olarak oy kullanabilirsiniz.");
     }
     else 
     {
          printf("Yasal olarak oy kullamazsiniz.");
     }







     return 0;
}