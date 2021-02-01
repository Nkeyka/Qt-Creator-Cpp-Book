#include <iostream>

using namespace std;

int main()
{
    int temp, maxtemp;
    bool even = false;
    cin >> maxtemp;
    do {
        cin >> temp;
        if (even) even = false;
        else even = true;
        if (!even && temp > maxtemp) maxtemp = temp;
    } while(temp != 0);
    cout << maxtemp;
    return 0;
}
