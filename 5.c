#include <stdio.h>
 int main()
 {
   int stroka;
   int probel;
   int down;
   int up;
   char bukva;
   char bukvup;
   char bukvdown;
   printf("введите букву:\n");
   scanf("%c", &bukva);
   for (stroka=0; stroka<5; stroka++)
        {
         for(probel=stroka; probel<4; probel++)
                printf(" ");
         for(down=stroka, bukvup=bukva; down>=0; down--)
                printf("%c", bukvup++);
         for(up=stroka, bukvdown=bukva+stroka-1; up>0; up--, bukvdown--)
                printf("%c", bukvdown);
         printf("\n");
        }
   return 0;
 }
