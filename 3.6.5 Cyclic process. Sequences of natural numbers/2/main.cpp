#include <iostream>

using namespace std;

int main()
{
    int N, adj;
    cout << "N = ";
    cin >> N;
    if (N > 2) adj = 1;
    else adj = 0;
    for (int i = 2; i < N; i += 2)
        adj *= i;
    cout << "adj = " << adj;
    return 0;
}
