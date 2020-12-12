/* Дано двузначное число.
 * Найти сумму его цифр. */

#include <iostream>

using namespace std;

int main()
{
    int D, sum;
    cout << "Enter number = ";
    cin >> D;
    sum = D / 10 + D % 10;
    cout << sum << endl;
    return 0;
}
