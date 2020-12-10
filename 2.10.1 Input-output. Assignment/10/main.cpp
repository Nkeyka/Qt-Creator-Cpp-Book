/* Точки A и B заданы координатами
 * на плоскости: A(x1,y1), B(x2,y2).
 * Найти длину отрезка AB. */

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, d;
    printf("Input A (x1, y1) = ");
    scanf("%f %f", &x1, &y1);
    printf("Input B (x2, y2) = ");
    scanf("%f %f", &x2, &y2);
    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Length AB = %f", d);
    return 0;
}
