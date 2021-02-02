#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    cout << "N = ";
    cin >> N;
    for (int i = 1; i <= N / 2; i++) {
        if (N % i == 0) sum+= i;
    }
    (N == sum) ? cout << "Yes" : cout << "No";
    return 0;
}
