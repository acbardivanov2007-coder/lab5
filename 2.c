 #include <stdio.h>
 int main()
 {
   int stroka;
   int dollar;
   for (stroka=0; stroka<5; stroka++)
        {
        for (dollar=0; dollar<=stroka; dollar++)
                printf("$");
        printf("\n");
        }
   return 0;
 }
