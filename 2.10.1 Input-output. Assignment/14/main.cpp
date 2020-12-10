/* Найти значение функции
 * y = 4 · (x + 1) ^ 3 + 5 · (x − 1) ^ 5 + 2
 * и её производной при заданном значении x. */

#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, y1;
    printf("Input x = ");
    scanf("%f", &x);
    y = 4 * powf(x + 1, 3) + 5 * powf(x - 1, 5) + 2;
    y1 = 4 * 3 * powf(x + 1, 2) + 5 * 5 * powf(x - 1, 4);
    printf("y = %f\n", y);
    printf("y' = %f", y1);
    return 0;
}
