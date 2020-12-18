#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y;
    cout << "Input x = ";
    cin >> x;
    cout << "Input y = ";
    cin >> y;

    if (y >= -3 && y <= -2.5 * fabs(x) + 2) cout << "Yes";
    else cout << "No";

    return 0;
}
