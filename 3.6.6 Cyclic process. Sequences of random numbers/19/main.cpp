#include <iostream>

using namespace std;

int main()
{
    int temp, count = -1, even = 0, odd = 0;
    do {
        cin >> temp;
        if (temp != 0)
            if (temp % 2 == 0) even++;
            else odd++;
        count++;
    } while(temp != 0);
    if (count == 0) count = 1;
    cout << "even " << (float) even / count * 100 << ", odd " << (float) odd / count * 100;
    return 0;
}
