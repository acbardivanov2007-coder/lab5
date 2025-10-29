#include <stdio.h>
 int main(void)
 {
   int i;
   int mnchisla[8];
   printf("введите 8 чисел:\n");
   for (i=0; i<8; i++)
           scanf("%d", &mnchisla[i]);
   for (i=7; i>=0; i--)
          printf("%d", mnchisla[i]);
   return 0;
 }
