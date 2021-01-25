#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0, adj = 1;
    cout << "N = ";
    cin >> N;
    for (int i = 3; i <= N; i++) {
        sum += i - 2;
    }
    for (int i = 1; i <= N + 1; i++) {
        adj *= i;
    }
    cout << "P = " << (float) sum / adj;
    return 0;
}
