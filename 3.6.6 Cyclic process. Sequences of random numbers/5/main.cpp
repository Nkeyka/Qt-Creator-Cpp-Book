#include <iostream>

using namespace std;

int main()
{
    int temp, maxtemp;
    cin >> maxtemp;
    do {
        cin >> temp;
        if (temp > maxtemp && temp != 0) maxtemp = temp;
    } while(temp != 0);
    cout << maxtemp;
    return 0;
}
