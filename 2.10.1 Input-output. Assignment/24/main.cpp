/* Найти значение функции
 * y = 3 / 2 · (x + 3) ^ 4 − 1 / 5 · (x − 1) ^ 5
 * и её производной при заданном значении x. */

#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, y1;
    printf("Input x = ");
    scanf("%f", &x);
    y = 3 / 2 * powf(x + 3, 4) - 1 / 5 * powf(x - 1, 5);
    y1 = 6 * powf(x + 3, 3) - powf(x - 1, 4);
    printf("y = %f\n", y);
    printf("y' = %f", y1);
    return 0;
}
