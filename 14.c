#include <stdio.h>
int main(void)
{
   int masiv1[8], masiv2[8];
   int i;
   int summa = 0;
   char c;
   printf("введите 8 чисел:\n");
   for (i = 0; i < 8; i++)
   {
      while (scanf("%d", &masiv1[i]) != 1)
      {
         printf("ошибка ввода\n");
         while ((c = getchar()) != '\n' && c != EOF);
      }
      summa += masiv1[i];
      masiv2[i] = summa;
   }
   for (i = 0; i < 8; i++)
   {
      printf("%5d", masiv1[i]);
   }
   printf("\n");
   for (i = 0; i < 8; i++)
   {
      printf("%5d", masiv2[i]);
   }
   return 0;
}
