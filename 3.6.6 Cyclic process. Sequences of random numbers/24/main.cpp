#include <iostream>

using namespace std;

int main()
{
    float temp, mintemp, maxtemp;
    cin >> temp;
    mintemp = maxtemp = temp;
    do {
        cin >> temp;
        if (temp != 0)
            if (temp < mintemp) mintemp = temp;
            else if (temp > maxtemp) maxtemp = temp;
    } while(temp != 0);
    cout << mintemp / maxtemp;
    return 0;
}
