#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a >= -2 && a <= 2) y = a * a;
    else y = 4;
    cout << "y = " << y;
    return 0;
}
