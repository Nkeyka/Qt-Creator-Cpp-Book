#include <iostream>

using namespace std;

int main()
{
    int temp, count = -1, negative = 0, positive = 0;
    do {
        cin >> temp;
        if (temp < 0) negative++;
        else if (temp > 0) positive++;
        count++;
    } while(temp != 0);
    if (count == 0) count = 1;
    cout << "-" << (float) negative / count * 100 << "%, " << (float) positive / count * 100 << "%";
    return 0;
}
