#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0, adj = 1;
    cout << "N = ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        adj *= i;
        sum += i * i;
    }
    cout << "P = " << (float) sum / adj;
    return 0;
}
