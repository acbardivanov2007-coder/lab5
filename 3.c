 #include <stdio.h>
 int main()
 {
   int stroka;
   int symbol;
   char bukva;
   for (stroka=0; stroka<6; stroka++)
        {
        bukva='F';
        for (symbol=0; symbol<=stroka; symbol++)
                {
                printf("%c", bukva--);
                }
        printf("\n");
        }
   return 0;
 }
