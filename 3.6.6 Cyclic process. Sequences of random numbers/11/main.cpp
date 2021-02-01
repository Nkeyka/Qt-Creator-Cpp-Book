#include <iostream>

using namespace std;

int main()
{
    float mintemp, maxtemp, temp;
    int N;
    cout << "N = ";
    cin >> N;
    cin >> mintemp;
    maxtemp = mintemp;
    for (int i = 1; i < N; i++) {
        cin >> temp;
        if (temp < mintemp) mintemp = temp;
        else if (temp > maxtemp) maxtemp = temp;
    }
    cout << mintemp - maxtemp;
    return 0;
}
