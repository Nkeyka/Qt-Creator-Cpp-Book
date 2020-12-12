/* С начала года прошло K часов.
 * Найти количество полных дней,
 * прошедших с начала года и остаток в часах. */

#include <iostream>

using namespace std;

int main()
{
    int K, full, part;
    cout << "Enter K = ";
    cin >> K;
    full = K / 24;
    part = 356 * 24 - K;
    cout << full << " days" << endl << part << " hours" << endl;
    return 0;
}
