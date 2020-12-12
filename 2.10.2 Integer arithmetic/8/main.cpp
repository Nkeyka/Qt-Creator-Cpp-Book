/* Дано трехзначное число.
 * Определить, сколько в нём единиц,
 * десятков и сотен. */

#include <iostream>

using namespace std;

int main()
{
    int D, full, part, part2;
    cout << "Enter number = ";
    cin >> D;
    full = D / 100;
    part = (D % 100) / 10;
    part2 = D % 100 % 10;
    cout << full << " hundred " << part << " decade " << part2 << " unit" << endl;
    return 0;
}
