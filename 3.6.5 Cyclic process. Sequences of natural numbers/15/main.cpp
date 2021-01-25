#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    cout << "N = ";
    cin >> N;
    for (int i = 1; i <= N; i++)
        sum += 2 * i * i - i + 1;
    cout << "sum = " << (float) sum / 3;
    return 0;
}
