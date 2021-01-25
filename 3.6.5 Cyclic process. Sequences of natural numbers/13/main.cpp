#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    cout << "N = ";
    cin >> N;
    for (int i = 2; i <= N; i++)
            sum += i * i - i;
    cout << "sum = " << sum;
    return 0;
}
