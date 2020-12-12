/* Расстояние L задано в метрах.
 * Найти количество полных километров
 * в нём и остаток в метрах. */

#include <iostream>

using namespace std;

int main()
{
    int L, full, part;
    cout << "Enter L = ";
    cin >> L;
    full = L / 1000;
    part = L % 1000;
    cout << full << " kilometrs " << part << " metrs" << endl;
    return 0;
}
