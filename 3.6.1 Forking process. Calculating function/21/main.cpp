#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a < 0) y = -4 * a / 3;
    else if (a >= 0 && a < M_PI_2) y = tan(a);
    else y = 4;
    cout << "y = " << y;
    return 0;
}
