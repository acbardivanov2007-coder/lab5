#include <stdio.h>
 int main()
 {
   char alphavit[27];
   char bukva;
   int chislo;
   for (chislo=1, bukva = 'a'; chislo<27; chislo++)
        {
        alphavit[chislo] = bukva++; 
        printf("индекс [%d] это буква %c\n", chislo, alphabvit[chislo]);
        }
   return 0;
 }
