 #include <stdio.h>
 int main()
 {
   float chislo1, chislo2;
   printf("ввнди два числа с плавающей запятой:\n");
   while (scanf("%f %f" , &chislo1, &chislo2))
   {
          printf("вот что получилось: %f\n",((chislo1-chislo2)/(chislo1*chislo2)));
          printf("введите новые числа для продолжения или не числовое значение для выхода:\n");
   }
   return 0;
 }
