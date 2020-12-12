/* Дано двузначное число.
 * Найти сумму квадратов его цифр. */

#include <iostream>

using namespace std;

int main()
{
    int N, sum;
    cout << "Enter N = ";
    cin >> N;
    sum = (N / 10) * (N / 10) + (N % 10) * (N % 10);
    cout << sum << endl;
    return 0;
}
