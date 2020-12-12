/* Дано трехзначное число.
 * Найти произведение его цифр. */

#include <iostream>

using namespace std;

int main()
{
    int D, sum;
    cout << "Enter number = ";
    cin >> D;
    sum = (D / 100) * ((D % 100) / 10) * (D % 100 % 10);
    cout << sum << endl;
    return 0;
}
