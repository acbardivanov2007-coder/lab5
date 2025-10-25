#include <stdio.h>
 int main()
 {
   char alphavit[26];
   char bukva;
   int chislo;
   for (chislo=0, bukva = 'a'; chislo<26; chislo++)
        {
        alphavit[chislo] = bukva++; 
        printf("индекс [%d] это буква %c\n", chislo, alphabvit[chislo]);
        }
   return 0;
 }
