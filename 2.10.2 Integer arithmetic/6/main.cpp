/* Дано двузначное число.
 * Найти произведение его цифр. */

#include <iostream>

using namespace std;

int main()
{
    int D, adj;
    cout << "Enter number = ";
    cin >> D;
    adj = D / 10 * (D % 10);
    cout << adj << endl;
    return 0;
}
