#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a <= 1) y = pow(0.5, a);
    else y = 3. / 4 * a + 5. / 4;
    cout << "y = " << y;
    return 0;
}
