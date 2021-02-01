#include <iostream>

using namespace std;

int main()
{
    int mintemp = 0, temp;
    int N;
    cout << "N = ";
    cin >> N;
    cin >> temp;
    if (temp % 2 == 0) mintemp = temp;
    for (int i = 1; i < N; i++) {
        cin >> temp;
        if (temp % 2 == 0 && temp < mintemp) mintemp = temp;
    }
    (mintemp == 0) ? cout << "No" : cout << mintemp;
    return 0;
}
