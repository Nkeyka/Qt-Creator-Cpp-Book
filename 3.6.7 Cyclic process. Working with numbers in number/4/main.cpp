#include <iostream>

using namespace std;

int main()
{
    int N, even = 0, odd = 0;
    cout << "N = ";
    cin >> N;
    do {
        if (N % 10 % 2 == 0) even++;
        else odd++;
        N /= 10;
    } while (N > 0);
    cout << "even " << even << " odd " << odd;
    return 0;
}
