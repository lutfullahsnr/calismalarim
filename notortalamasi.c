#include <stdio.h>
int main()
{
     /*
          Vize %30 Ödev %10 Final %60 etkileyen bir derste öğrencinin not ortalamasi + hangi harf notuna sahip olduğu;
     */
     float vize,odev,final;

     printf("Lutfen vize notunuzu giriniz...\n");
     scanf("%f", &vize);
     printf("Lutfen odev notunuzu giriniz...\n");
     scanf("%f", &odev);
     printf("Lutfen final notunuzu giriniz...\n");
     scanf("%f", &final);

     float ortalama = ((vize*30/100)+(odev*10/100)+(final*60/100));
     printf("Bu dersteki not ortalamaniz: %.2f\n", ortalama);
     if(90.0<= ortalama && ortalama <=100.0)
     {
          printf("Harf notunuz:AA");
     }
     else if(80.0<= ortalama && ortalama  <90.0)
     {
          printf("Harf notunuz:BA");
     }
     else if(75.0<= ortalama && ortalama <80.0)
     {
          printf("Harf notunuz:BB");
     }
     else if(70.0<= ortalama && ortalama <75.0)
     {
          printf("Harf notunuz:CB");
     }
     else if(60.0<= ortalama && ortalama <70.0)
     {
          printf("Harf notunuz:CC");
     }
     else if(50.0<= ortalama && ortalama <60.0)
     {
          printf("Harf notunuz:DC");
     }
     else if(40.0<= ortalama && ortalama <50.0)
     {
          printf("Harf notunuz:DD");
     }
     else if(30.0<= ortalama && ortalama <40.0)
     {
          printf("Harf notunuz:FD");
     }
     else
     {
          printf("Harf notunuz:FF");
     }
     
     scanf("%f", &odev);
     return 0;
}