#include <iostream>

using namespace std;

int main()
{
    float sum = 0, temp;
    int count = 0;
    int N;
    cout << "N = ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        if (temp < 0) {
            sum += temp;
            count++;        }
    }
    (count == 0) ? cout << 0 : cout << sum / count;
    return 0;
}
