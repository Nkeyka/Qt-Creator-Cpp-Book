#include <iostream>

using namespace std;

int main()
{
    int negative = 0, positive = 0, zero = 0, temp, N;
    cout << "N = ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        if (temp < 0) negative++;
        else if (temp > 0) positive++;
        else if (temp == 0) zero++;
    }
    cout << "-" << (float) negative / N * 100 << "%, +" << (float) positive / N * 100 << "%, " << (float) zero / N * 100 << "%";
    return 0;
}
