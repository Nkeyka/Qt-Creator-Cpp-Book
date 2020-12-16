#include <iostream>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a <= 0) y = 4;
    else y = -a / 2 + 4;
    cout << "y = " << y;
    return 0;
}
