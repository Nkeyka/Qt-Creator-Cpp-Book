/* Дано двузначное число.
 * Вывести число, полученное
 * при перестановке цифр исходного числа. */

#include <iostream>

using namespace std;

int main()
{
    int D, D2;
    cout << "Enter number = ";
    cin >> D;
    D2 = (D % 10) * 10 + D / 10;
    cout << D2 << endl;
    return 0;
}
