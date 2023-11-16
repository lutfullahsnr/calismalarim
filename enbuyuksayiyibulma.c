#include <stdio.h> 
int main()
{
     int x,y,z;

     printf("Lutfen x,y ve z degerlerini sirasiyla giriniz...\n");
     scanf("%d%d%d", &x, &y, &z);

     if(x>y && x>z)
     {
          printf("x sayisi en buyuk sayidir.\n");
     }
     if(z>y && z>x)
     {
          printf("z sayisi en buyuk sayidir.\n");
     }
     if(y>z && y>x)          
     {
          printf("y sayisi en buyuk sayidir.\n");
     }
     if(x == y && x == z)
     {
          printf("Hepsi birbirine esittir\n");
     }
     int a;
     int b;
     int c;

     printf("Lutfen a,b ve c degerlerini sirasiyla giriniz...\n");
     scanf("%d%d%d", &a, &b, &c);
     
     if(a>b && a>c)
     {
          printf("a sayisi en buyuk sayidir.\n");
     }
     else if (b>c)
     {
          printf("b sayisi en buyuk sayidir.\n");
     }
     else if(a == c && b == c)
     {
          printf("Hepsi birbirine esittir.\n");
     }
     else 
     {
          printf("c sayisi en buyuk sayidir.\n");
     }

     scanf("%d%d%d", &a, &b,&c);








     return 0;
}