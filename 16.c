 #include <stdio.h>
 int main(void)
 {
 float daf = 100.0;
 float dei = 100.0;
 int year;
 for (year=0; daf >= dei; year++)
        {
         daf += 10;
         dei += (dei*5)/100.0;
        }
printf("года: %2d | Дафна: %.1f | Дейдра: %.1f\n", year, daf, dei);
 return 0;
 }
