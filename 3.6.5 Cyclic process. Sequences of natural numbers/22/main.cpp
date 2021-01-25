#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0, adj = 1;
    cout << "N = ";
    cin >> N;
    for (int i = 5; i <= 15; i++) {
        sum += i;
    }
    for (int i = 1; i <= 2 * N + 1; i++) {
        adj *= i;
    }
    cout << "P = " << (float) sum / adj;
    return 0;
}
