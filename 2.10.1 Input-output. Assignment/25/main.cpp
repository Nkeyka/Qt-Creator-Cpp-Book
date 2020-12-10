/* Точки A и B заданы координатами
 * в пространстве: A(x1, y1, z1), B(x2, y2, z2).
 * Найти длину отрезка AB. */

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, z1, x2, y2, z2, AB;
    printf("Input A (x1, y1, z1) = ");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("Input B (x2, y2, z2) = ");
    scanf("%f %f %f", &x2, &y2, &z2);
    AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1));
    printf("Length AB = %f", AB);
    return 0;
}
