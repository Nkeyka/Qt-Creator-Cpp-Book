#include <iostream>

using namespace std;

int main()
{
    int N, temp, sum = 0;
    cout << "N = ";
    cin >> N;
    temp = N;
    do {
        sum += (temp % 10) * (temp % 10) * (temp % 10);
        temp /= 10;
    } while (temp > 0);
    (N == sum) ? cout << "Yes" : cout << "No";
    return 0;
}
