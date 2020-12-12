/* Расстояние L задано в сантиметрах.
 * Найти количество полных метров
 * в нём и остаток в сантиметрах. */

#include <iostream>

using namespace std;

int main()
{
    int L, full, part;
    cout << "Enter L = ";
    cin >> L;
    full = L / 100;
    part = L % 100;
    cout << full << " metr " << part << " santimetr" << endl;
    return 0;
}
