#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a >= -M_SQRT2 && a <= M_SQRT2) y = 4 - a * a;
    else y = 2;
    cout << "y = " << y;
    return 0;
}
