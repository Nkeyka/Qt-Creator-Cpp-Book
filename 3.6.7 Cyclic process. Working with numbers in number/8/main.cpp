#include <iostream>

using namespace std;

int main()
{
    int N, even = 0, odd = 0;
    cout << "N = ";
    cin >> N;
    for (int i = 1; i <= N / 2; i++) {
        if (N % i == 0)
            if (i % 2 == 0) even += i;
            else odd += i;
    }
    if (N % 2 == 0) even += N;
    else odd += N;
    cout << "even " << even << " odd " << odd;
    return 0;
}
