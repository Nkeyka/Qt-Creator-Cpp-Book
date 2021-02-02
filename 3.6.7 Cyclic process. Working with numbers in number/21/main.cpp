#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N, NTemp, temp, count = 0;
    cout << "N = ";
    cin >> N;
    temp = N;
    do {
        count++;
        temp /= 10;
    } while (temp > 0);
    NTemp = N;
    for (int i = 1; i <= count / 2; i++) {
        if (NTemp % 10 != N / (int) pow(10, count - i)) {
            cout << "Yes";
            return 0;
        }
        N %= (int) pow(10, count - i);
        NTemp /= 10;
    }
    cout << "No";
    return 0;
}
