#include <stdio.h>
int main(void)
{
    double rad1 = 0, rad2 = 0;  
    int z, x;               
    int znak = 1;           
    printf("введите чиссло для последовательности:\n");
    scanf("%d", &z);
    while (z > 0)
   {
        for (x = 1; x <= z; x++)
        {
            rad1 += 1.0 / x;
            rad2 += (1.0 / x) * znak;
            znak = (-znak);
        }   
        printf("первая последовательность: %.10f\n", rad1);
        printf("вторая последовательность: %.10f\n", rad2);
        printf("введите мледующее число или 0 для выхода:\n");
        rad1 = 0;
        rad2 = 0;
        znak = 1;
        scanf("%d", &z);
    }
    return 0;
}
