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

    if (y >= 0 && y <= 5 && y >= -5 * fabs(x) + 15) cout << "Yes";
    else cout << "No";

    return 0;
}
