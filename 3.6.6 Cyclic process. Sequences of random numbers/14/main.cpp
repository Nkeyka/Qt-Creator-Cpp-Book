#include <iostream>

using namespace std;

int main()
{
    float temp, oldtemp;
    int N;
    cout << "N = ";
    cin >> N;
    cin >> temp;
    for (int i = 1; i < N; i++) {
        oldtemp = temp;
        cin >> temp;
        if (temp <= oldtemp) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
