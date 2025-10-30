 #include <stdio.h>
 int main()
{
 int min, max;
 int summ = 0;
 int m, M;
 printf("введите нижнийи верхний предел:\n");
 scanf("%d %d", &min, &max);
 while (min != max)
        {
         for (m=min, M=max+1; m != M; m++)
                 summ = summ + m*m;
         printf("сумма квадратов целых чисел от %d до %d равна %d\n", min, max, summ);
         summ=0;                       
         printf("введите следующую комбинацию пределов:\n");
         scanf("%d %d", &min, &max);
        }
 return 0;
 }
