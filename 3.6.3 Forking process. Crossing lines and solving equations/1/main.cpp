#include <iostream>

using namespace std;

int main()
{
    float x0, y0, r, x1, y1;
    cout << "Enter x0 = ";
    cin >> x0;
    cout << "Enter y0 = ";
    cin >> y0;
    cout << "Enter r = ";
    cin >> r;
    cout << "Enter x1 = ";
    cin >> x1;
    cout << "Enter y1 = ";
    cin >> y1;

    if ((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) <= r * r) cout << "Yes";
    else cout << "No";
    return 0;
}
