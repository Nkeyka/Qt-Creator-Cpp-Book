/* Расстояние L задано в дециметрах.
 * Найти количество полных метров
 * в нём и остаток в сантиметрах. */

#include <iostream>

using namespace std;

int main()
{
    int L, full, part;
    cout << "Enter L = ";
    cin >> L;
    full = L / 10;
    part = L % 10 * 10;
    cout << full << " metrs " << part << " santimetrs" << endl;
    return 0;
}
