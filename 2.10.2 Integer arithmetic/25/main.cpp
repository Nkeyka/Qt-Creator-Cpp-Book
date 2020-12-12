/* Дано трехзначное число.
 * Найти квадрат суммы его цифр. */

#include <iostream>

using namespace std;

int main()
{
    int N, quad;
    cout << "Enter N = ";
    cin >> N;
    quad = ((N / 100) + ((N % 100) / 10) + (N % 100 % 10)) *
            ((N / 100) + ((N % 100) / 10) + (N % 100 % 10));
    cout << quad << endl;
    return 0;
}
