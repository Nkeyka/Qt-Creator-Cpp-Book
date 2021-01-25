#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0, adj = 1;
    cout << "N = ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        sum += i + 1;
    }
    for (int i = 1; i <= 2 * N; i++) {
        adj *= i;
    }
    cout << "P = " << (float) sum / adj;
    return 0;
}
