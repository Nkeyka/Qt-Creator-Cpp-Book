#include <iostream>

using namespace std;

int main()
{
    int N, max;
    cout << "N = ";
    cin >> N;
    max = N % 10;
    N /= 10;
    while (N > 0) {
        if (N % 10 > max) max = N % 10;
        N /= 10;
    }
    cout << max;
    return 0;
}
