#include <stdio.h>
#define dunbar_chislo 150
 int main(void)
 {
 int druzhe = 5;
 int nedelya;
 for (nedelya=1; (druzhe - nedelya)*2 < dunbar_chislo; nedelya++)
        {
         druzhe = (druzhe - nedelya)*2;
        }
 printf("на %d неделе у профессора Робинсона  %d друзей", nedelya, druzhe);
 return 0;
 }
