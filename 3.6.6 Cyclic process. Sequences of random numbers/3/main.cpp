#include <iostream>

using namespace std;

int main()
{
    int count = 0, temp, oldtemp;
    cin >> oldtemp;
    do {
        cin >> temp;
        if (temp * oldtemp < 0) count++;
        oldtemp = temp;
    } while(temp != 0);
    cout << count;
    return 0;
}
