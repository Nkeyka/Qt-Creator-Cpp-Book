#include <iostream>

using namespace std;

int main()
{
    int temp, oldtemp;
    int N;
    cout << "N = ";
    cin >> N;
    cin >> temp;
    for (int i = 1; i < N; i++) {
        oldtemp = temp;
        cin >> temp;
        if (temp * oldtemp > 0) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
