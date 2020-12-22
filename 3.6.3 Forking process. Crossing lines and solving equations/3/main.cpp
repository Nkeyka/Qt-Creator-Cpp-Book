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

    d = x0; // Расстояние до оси y

    if (r > d) {
        cout << "x1 = 0 y1 = " << y0 + sqrt(r * r - d * d) << endl;
        cout << "x2 = 0 y2 = " << y0 - sqrt(r * r - d * d);
    }
    else if (r == d) cout << "x = 0 y = " << y0 + sqrt(r * r - d * d);
    else cout << "No point";

    return 0;
}
