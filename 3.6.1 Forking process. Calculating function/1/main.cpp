#include <iostream>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a < -3) y = 3;
    else if (a >= -3 && a < 2) y = 4;
    else y = 1;
    cout << "y = " << y;
    return 0;
}
