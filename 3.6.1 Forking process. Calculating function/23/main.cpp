#include <iostream>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a <= -1) y = 2;
    else y = 3 - a * a;
    cout << "y = " << y;
    return 0;
}
