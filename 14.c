 #include <stdio.h>
 int main(void)
 {
   int masiv1[8], masiv2[8];
   int i;
   int summa=0;
   printf("введите 8 чисел:\n");
   masiv2[0]=0;
   for (i = 0; i<8; i++)
          {
          scanf("%d", &masiv1[i]);
          summa+=masiv1[i];
          masiv2[i]=summa;
          }
   i=0;
   for (i = 0; i<8; i++)
          {
          printf("%5d", masiv1[i]);
          }
   i=0;
   printf("\n");
   for (i = 0; i<8; i++)
          {
           printf("%5d", masiv2[i]);
          }
   return 0;
 }
