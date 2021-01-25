#include <iostream>

using namespace std;

int main()
{
    int N, adj;
    cout << "N = ";
    cin >> N;
    if (N > 3) adj = 1;
    else adj = 0;
    for (int i = 3; i < N; i += 3)
        adj *= i;
    cout << "adj = " << adj;
    return 0;
}
