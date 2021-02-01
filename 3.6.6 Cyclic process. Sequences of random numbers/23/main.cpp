#include <iostream>

using namespace std;

int main()
{
    int sum = 0, sum2 = 0, temp;
    int N;
    cout << "N = ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        if (temp > 0) sum += temp;
        else sum2 += temp;
    }
    cout << "+" << sum << " " << sum2;
    return 0;
}
