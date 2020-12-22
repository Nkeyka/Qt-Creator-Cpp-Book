#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x0, y0, r, d;
    cout << "Enter x0 = ";
    cin >> x0;
    cout << "Enter y0 = ";
    cin >> y0;
    cout << "Enter r = ";
    cin >> r;

    d = y0; // Расстояние до оси X

    if (r > d) {
        cout << "x1 = " << x0 + sqrt(r * r - d * d) << " y1 = 0" << endl;
        cout << "x2 = " << x0 - sqrt(r * r - d * d) << " y2 = 0";
    }
    else if (r == d) cout << "x = " << x0 + sqrt(r * r - d * d) << " y = 0";
    else cout << "No point";

    return 0;
}
