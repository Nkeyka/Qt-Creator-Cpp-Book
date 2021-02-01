#include <iostream>

using namespace std;

int main()
{
    float temp, oldtemp;
    cin >> temp;
    do {
        oldtemp = temp;
        cin >> temp;
        if (temp >= oldtemp) {
            cout << "No";
            return 0;
        }
    } while (temp != 0);
    cout << "Yes";
    return 0;
}
