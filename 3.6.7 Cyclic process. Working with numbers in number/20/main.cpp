#include <iostream>

using namespace std;

int main()
{
    int N, N2;
    cout << "N = ";
    cin >> N;
    cout << "N2 = ";
    cin >> N2;
    while (N != N2) {
        if (N > N2) N -= N2;
        else N2 -= N;
    }
    (N > 1) ? cout << "Yes" : cout << "No";
    return 0;
}
