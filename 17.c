#include <stdio.h>
 int main(void)
{
 float dengi = 1000000.0f;
 int year=0;
 while (dengi > 0)
        {
         year++;
         dengi -= 100000.0f;
         dengi = (dengi*1.08f);
         printf("год: %d, баланс счета: %.1f\n", year, dengi);
        }
 printf("банкротство наступит через %2d  лет ($ %.1f баланс счета)", year, dengi);
 return 0;
 }
