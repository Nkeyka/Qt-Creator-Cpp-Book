#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    cout << "N = ";
    cin >> N;
    do {
        sum += (N % 10) * 2;
        N /= 10;
    } while (N > 0);
    cout << sum;
    return 0;
}
