#include <stdio.h> 
int main ()
{
/*
     int a = 27;
     int b = 57;
     int c = 42;
          if(b > a)
          {
               printf("b a'dan buyuktur.\n");
          }
          if( a > c)
          {
               printf("a c'den buyuktur.\n");
          }
          else
          {
               printf("c a'dan buyuktur veya esittir.\n");
          }
*/

/*
          if( a > c)
          {
               printf("a c'den buyuktur.\n");
          }

          else if(a == c)
          {
               printf("a c'ye esit degildir.\n");
          }
          else
          {
               printf("a c'den kucuktur.\n");
          }
*/
     int x;
     int y;
     
          printf("x degerini giriniz...\n");
          scanf("%d", &x);
          printf("y degerini giriniz...\n");
          scanf("%d", &y);
          if(x > y)
          {
               printf("x y'den buyuktur.\n");
          }

          else if (x == y)
          {
               printf("x y'ye esittir.\n");
          }

          else
          {
               printf("x y'den kucuktur.\n");
          }








     return 0;
}