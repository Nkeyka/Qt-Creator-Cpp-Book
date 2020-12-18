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

    if (y <= -fabs(x) + 2 && y >= fabs(x) - 2) cout << "Yes";
    else cout << "No";

    return 0;
}
