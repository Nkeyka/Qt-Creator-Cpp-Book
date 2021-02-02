#include <iostream>

using namespace std;

int main()
{
    int N, N2, sum = 0;
    cout << "N = ";
    cin >> N;
    cout << "N2 = ";
    cin >> N2;
    do {
        sum += N % 10;
        N /= 10;
    } while (N > 0);
    do {
        sum += N2 % 10;
        N2 /= 10;
    } while (N2 > 0);
    cout << sum;
    return 0;
}
