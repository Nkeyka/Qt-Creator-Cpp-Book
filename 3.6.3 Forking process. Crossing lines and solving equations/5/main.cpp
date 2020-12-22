#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, y1, r1, x2, y2, r2, d;
    cout << "Enter O1() x1, y1, r1 = ";
    cin >> x1 >> y1 >> r1;
    cout << "Enter O2() x2, y2, r2 = ";
    cin >> x2 >> y2 >> r2;

    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if (r1 + r2 > d && r1 + d > r2 && r2 + d > r1) cout << "Cross";
    else if (r1 + r2 == d || fabs(r1 - r2) == d) cout << "Touch";
    else cout << "No cross";

    return 0;
}
