#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a < -1) y = 2;
    else if (a >= -1 && a < sqrt(2.5)) y = 2 - 2 * a * a;
    else y = -3;
    cout << "y = " << y;
    return 0;
}
