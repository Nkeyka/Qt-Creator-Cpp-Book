#include <iostream>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a < -3) y = 3;
    else if (a >= -3 && a < 0) y = a - 3;
    else if (a >= 0 && a < 3) y = -a + 3;
    else y = 3;
    cout << "y = " << y;
    return 0;
}
