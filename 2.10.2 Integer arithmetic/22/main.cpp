/* С начала года прошло K дней.
 * Найти количество полных недель,
 * прошедших с начала года и остаток в днях. */

#include <iostream>

using namespace std;

int main()
{
    int K, full, part;
    cout << "Enter K = ";
    cin >> K;
    full = K / 7;
    part = 356 - K;
    cout << full << " weeks" << endl << part << " days" << endl;
    return 0;
}
