#include <stdio.h>
 int main()
 {
   int stroka;
   int symbol;
   char bukva = 'A';
   for (stroka=0; stroka<6; stroka++)
        {
         for(symbol=0;  symbol<=stroka;  symbol++)
                printf("%c", bukva++);
         printf("\n");
        }
   return 0;
 }
