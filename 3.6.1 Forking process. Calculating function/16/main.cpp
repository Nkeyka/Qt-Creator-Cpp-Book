#include <iostream>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a >= -1 && a <= 1) y = 4 - 4 * a * a;
    else y = 2;
    cout << "y = " << y;
    return 0;
}
