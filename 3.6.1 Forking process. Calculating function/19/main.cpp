#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a < -sqrt(2.5)) y = a + 5;
    else if (a >= -sqrt(2.5) && a < sqrt(2.5)) y = 2 * a * a - 2;
    else y = -a + 4;
    cout << "y = " << y;
    return 0;
}
