/* Масса M задана в килограммах.
 * Найти количество полных тонн
 * в ней и остаток в килограммах. */

#include <iostream>

using namespace std;

int main()
{
    int M, full, part;
    cout << "Enter M = ";
    cin >> M;
    full = M / 1000;
    part = M % 1000;
    cout << full << " ton " << part << " kilogram" << endl;
    return 0;
}
