#include <iostream>

using namespace std;

int main()
{
    int temp, count = 0, sum = 0;
    do {
        cin >> temp;
        if (temp % 2 == 0) {
            sum += temp;
            count++;
        }
    } while (temp != 0);
    (count == 0) ? cout << 0 : cout << (float) sum / count;
    return 0;
}
