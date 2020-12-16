#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a > -2 && a <= 2) y = 2;
    else y = fabs(a);
    cout << "y = " << y;
    return 0;
}
