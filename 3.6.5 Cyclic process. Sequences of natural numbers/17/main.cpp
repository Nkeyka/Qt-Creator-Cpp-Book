#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    cout << "N = ";
    cin >> N;
    for (int i = 3; i <= N + 2; i++)
        sum += 2 * i - 4;
    cout << "sum = " << sum;
    return 0;
}
