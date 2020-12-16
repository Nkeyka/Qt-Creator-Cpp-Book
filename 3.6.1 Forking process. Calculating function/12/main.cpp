#include <iostream>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a <= -2) y = -a;
    else if (a > -2 && a <= 0) y = 1.5 * a + 5;
    else y = -2 * a / 3 + 5;
    cout << "y = " << y;
    return 0;
}
