/* Дано трехзначное число.
 * Вывести число, полученное при перестановке
 * цифр десятков и единиц исходного числа. */

#include <iostream>

using namespace std;

int main()
{
    int D, D2;
    cout << "Enter number = ";
    cin >> D;
    D2 = D / 100 * 100 + (D % 100) / 10 + (D % 100 % 10) * 10;
    cout << D2 << endl;
    return 0;
}
