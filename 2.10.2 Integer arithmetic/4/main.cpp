/* Дано двузначное число.
 * Вывести на экран количество десятков
 * и единиц в нём. */

#include <iostream>

using namespace std;

int main()
{
    int D, full, part;
    cout << "Enter number = ";
    cin >> D;
    full = D / 10;
    part = D % 10;
    cout << full << " decade " << part << " unit" << endl;
    return 0;
}
