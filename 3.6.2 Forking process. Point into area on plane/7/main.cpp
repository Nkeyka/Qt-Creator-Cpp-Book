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

    if (y <= 0 && y >= -4 && y >= 4 * fabs(x) - 12) cout << "Yes";
    else cout << "No";

    return 0;
}
