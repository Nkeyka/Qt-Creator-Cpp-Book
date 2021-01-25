#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    cout << "N = ";
    cin >> N;
    for (int i = 1; i < N; i += 2)
        sum += i;
    cout << "sum = " << sum;
    return 0;
}
