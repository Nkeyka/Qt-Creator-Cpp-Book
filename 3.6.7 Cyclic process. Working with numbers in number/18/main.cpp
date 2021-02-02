#include <iostream>

using namespace std;

int main()
{
    int N, sum;
    cout << "N = ";
    cin >> N;
    sum = N;
    for (int i = 1; i <= N / 2; i++) {
        if (N % i == 0) sum+= i;
    }
    cout << sum;
    return 0;
}
