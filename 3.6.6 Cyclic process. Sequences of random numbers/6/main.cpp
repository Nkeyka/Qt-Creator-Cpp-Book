#include <iostream>

using namespace std;

int main()
{
    int mintemp, temp, N;
    cout << "N = ";
    cin >> N;
    cin >> mintemp;
    for (int i = 1; i < N; i++) {
        cin >> temp;
        if (temp < mintemp) mintemp = temp;
    }
    cout << mintemp;
    return 0;
}
