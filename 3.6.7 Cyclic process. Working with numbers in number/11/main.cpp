#include <iostream>

using namespace std;

int main()
{
    int N, min;
    cout << "N = ";
    cin >> N;
    min = N % 10;
    N /= 10;
    while (N > 0) {
        if (N % 10 < min) min = N % 10;
        N /= 10;
    }
    cout << min;
    return 0;
}
