#include <iostream>

using namespace std;

int main()
{
    int sum = 0, temp;
    do {
        cin >> temp;
        if (temp > 0)
            sum += temp;
    } while(temp != 0);
    cout << sum;
    return 0;
}
