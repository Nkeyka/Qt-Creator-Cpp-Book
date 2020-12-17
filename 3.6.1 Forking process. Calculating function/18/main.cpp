#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a < -sqrt(8)) y = -2;
    else if (a >= -sqrt(8) && a < sqrt(8)) y = a * a / 2 - 2;
    else y = 2;
    cout << "y = " << y;
    return 0;
}
