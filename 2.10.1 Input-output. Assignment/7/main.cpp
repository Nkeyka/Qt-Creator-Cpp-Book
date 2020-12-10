/* Дана длина окружности L.
 * Найти радиус окружности R и площадь круга S. */

#include <stdio.h>
#include <math.h>

int main()
{
    float L, R, S;
    printf("Input L = ");
    scanf("%f", &L);
    R = L / M_PI / 2;
    S = M_PI * R * R;
    printf("Radius of circle = %f\n", R);
    printf("Square of circle = %f", S);
    return 0;
}
