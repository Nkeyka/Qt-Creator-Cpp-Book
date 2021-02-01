#include <iostream>

using namespace std;

int main()
{
    int sum = 0, count = 0, temp, N;
    cout << "N = ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        if (temp > 0) {
            sum += temp;
            count++;
        }
    }
    if (count == 0) count = 1;
    cout << (float) sum / count;
    return 0;
}
