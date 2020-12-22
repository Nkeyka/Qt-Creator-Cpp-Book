#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float b, c, d, k, m;
    float D;
    float x1, x2;
    float y1, y2;
    cout << "y = bx^2 + cx + d\nEnter b, c, d = ";
    cin >> b >> c >> d ;
    cout << "y = kx + m\nEnter k, m = ";
    cin >> k >> m;

    if (b == 0 && c == k) cout << "No";
    else {
        c -= k;
        d -= m;

        if (b == 0) {
            x1 = -d / c;
            y1 = k * x1 + m;
            cout << "x = " << x1 << " y = " << y1 << endl;
            return 0;
        }

        D = c * c - 4 * b * d;

        if (D > 0) {
            x1 = (-c + sqrt(D)) / (2 * b);
            x2 = (-c - sqrt(D)) / (2 * b);
            y1 = k * x1 + m;
            y2 = k * x2 + m;
            cout << "x1 = " << x1 << " y2 = " << y1 << endl;
            cout << "x1 = " << x2 << " y2 = " << y2 << endl;
        }
        else if (D == 0) {
            x1 = -c / (2 * b);
            y1 = k * x1 + m;
            cout << "x = " << x1 << " y = " << y1 << endl;
        }

    }

    return 0;
}
