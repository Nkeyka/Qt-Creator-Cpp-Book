#include <iostream>

using namespace std;

int main()
{
    int N, N2, sum = 0;
    cout << "N = ";
    cin >> N;
    cout << "N2 = ";
    cin >> N2;
    for (int i = 1; i <= N / 2; i++) {
        if (N % i == 0) sum+= i;
    }
    (N2 == sum) ? cout << "Yes" : cout << "No";
    return 0;
}
