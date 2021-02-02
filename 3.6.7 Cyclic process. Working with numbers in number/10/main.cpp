#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "N = ";
    cin >> N;
    for (int i = 2; i <= N / 2; i++) {
        if (N % i == 0) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}
