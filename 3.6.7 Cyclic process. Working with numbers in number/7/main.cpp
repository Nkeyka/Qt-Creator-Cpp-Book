#include <iostream>

using namespace std;

int main()
{
    int N, sumEven = 0, sumOdd = 0;
    cout << "N = ";
    cin >> N;
    do {
        if (N % 10 % 2 == 0) sumEven += N % 10;
        else sumOdd += N % 10;
        N /= 10;
    } while (N > 0);
    cout << "even " << sumEven << " odd " << sumOdd;
    return 0;
}
