#include <stdio.h>
 int main)
 {
   int min, max, kvadrat, kub;
  
   printf("введите меньшее число:\n");
   scanf("%d", &min);
   printf("введите большее число:\n");
   scanf("%d", &max);
   printf("число  квадрат  куб\n");

   for (min; min <= max; min++)
              printf("%/4d %7d %7d\n" , min, min*min, min*min*min);/
          printf("\n");
   return 0;
 }
