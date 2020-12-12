/* Дано двузначное число.
 * Найти квадрат разности его цифр. */

#include <iostream>

using namespace std;

int main()
{
    int N, quad;
    cout << "Enter N = ";
    cin >> N;
    quad = ((N / 10) - (N % 10)) * ((N / 10) - (N % 10));
    cout << quad << endl;
    return 0;
}
