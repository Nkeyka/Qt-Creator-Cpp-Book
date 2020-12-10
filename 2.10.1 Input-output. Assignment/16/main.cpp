/* Известны координаты вершин квадрата
 * ABCD: A (x1, y1) и C (x2, y2).
 * Найти площадь S и периметр P. */

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, a, S, P;
    printf("Input A (x1, y1) = ");
    scanf("%f %f", &x1, &y1);
    printf("Input C (x2, y2) = ");
    scanf("%f %f", &x2, &y2);
    // Сторона
    a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) / sqrt(2);
    S = a * a;
    P = 4 * a;
    printf("S = %f\n", S);
    printf("P = %f", P);
    return 0;
}
