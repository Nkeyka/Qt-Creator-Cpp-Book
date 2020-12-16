#include <iostream>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a <= 0) y = - 2 * a / 30 + 2;
    else y = a;
    cout << "y = " << y;
    return 0;
}
