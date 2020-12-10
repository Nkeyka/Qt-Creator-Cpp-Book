/* Даны переменные A, B, C.
 * Изменить их значения, переместив содержимое A в B,
 * B — в C, C — в A, и вывести новые значения переменных A, B, C. */

#include <stdio.h>

int main()
{
    float A, B, C, D;
    printf("Input A = ");
    scanf("%f", &A);
    printf("Input B = ");
    scanf("%f", &B);
    printf("Input C = ");
    scanf("%f", &C);
    D = A;
    A = C;
    C = B;
    B = D;
    printf("A = %f\n", A);
    printf("B = %f\n", B);
    printf("C = %f\n", C);
    return 0;
}
