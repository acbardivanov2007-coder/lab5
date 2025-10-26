#include <stdio.h>
 float calc (float ch1, float ch2);
 int main()
 {
   float ch1, ch2;
   printf("введите два числа с плавающей запятой:\n");
   while (scanf("%f %f" , &ch1, &ch2))
   {
          printf("вот что получилось: %f\n", calc(ch1, ch2));
          printf("введите новые два числа для продолжения или не числовое значение для выхода:\n");
   }
   return 0;
 }
 float calc (float ch1, float ch2)
 {
   return ((ch1-ch2)/(ch1*ch2));
 }
