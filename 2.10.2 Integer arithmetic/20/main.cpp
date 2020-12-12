/* Размер файла B дан в килобайтах.
 * Найти количество полных мегабайтов,
 * которые занимает данный файл
 * и остаток в килобайтах. */

#include <iostream>

using namespace std;

int main()
{
    int B, full, part;
    cout << "Enter size of B = ";
    cin >> B;
    full = B / 1000;
    part = B % 1000;
    cout << full << " megabytes " << part << " kilobytes" << endl;
    return 0;
}
