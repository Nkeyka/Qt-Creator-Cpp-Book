/* Масса M задана в граммах.
 * Найти количество полных килограммов
 * в ней и остаток в граммах. */

#include <iostream>

using namespace std;

int main()
{
    int M, full, part;
    cout << "Enter M = ";
    cin >> M;
    full = M / 1000;
    part = M % 1000;
    cout << full << " kilograms " << part << " grams" << endl;
    return 0;
}
