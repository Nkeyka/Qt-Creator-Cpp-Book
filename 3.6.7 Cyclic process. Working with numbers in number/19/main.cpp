#include <iostream>

using namespace std;

int main()
{
    int N, temp, min, count = 0, i = 0, existI;
    cout << "N = ";
    cin >> N;
    temp = N;
    do {
        count++;
        temp /= 10;
    } while (temp > 0);
    min = N % 10;
    N /= 10;
    existI = 0;
    while (N > 0) {
        i++;
        if (N % 10 < min) {
            min = N % 10;
            existI = i;
        }
        N /= 10;
    }
    cout << count - existI;
    return 0;
}
