/* Размер файла B дан в байтах.
 * Найти количество полных килобайтов,
 * которые занимает данный файл и остаток в байтах. */

#include <iostream>

using namespace std;

int main()
{
    int B, full, part;
    cout << "Enter size of file B = ";
    cin >> B;
    full = B / 1000;
    part = B % 1000;
    cout << full << " kilobyte " << part << " byte" << endl;
    return 0;
}
