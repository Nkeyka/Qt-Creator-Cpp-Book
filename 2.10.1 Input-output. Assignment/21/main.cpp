/* Три точки заданы координатами
 * на плоскости: A (x1 , y1), B (x2, y2) и C (x3, y3).
 * Найти длины отрезков AB и BC. */

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, x3, y3, AB, BC;
    printf("Input A (x1, y1) = ");
    scanf("%f %f", &x1, &y1);
    printf("Input B (x2, y2) = ");
    scanf("%f %f", &x2, &y2);
    printf("Input C (x3, y3) = ");
    scanf("%f %f", &x3, &y3);
    AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    printf("Length AB = %f\n", AB);
    printf("Length BC = %f", BC);
    return 0;
}
