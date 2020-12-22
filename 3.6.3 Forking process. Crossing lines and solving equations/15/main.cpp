#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, d, m, n;
    float D;
    float x1, x2;
    float y1, y2;
    cout << "y = ax^2 + bx + c\nEnter a, b, c = ";
    cin >> a >> b >> c ;
    cout << "y = dx^2 + mx + n\nEnter d, m, n = ";
    cin >> d >> m >> n;

    if (a == d && b == m) cout << "No";
    else {
        a -= d;
        b -= m;
        c -= n;

        if (a == 0) {
            x1 = -c / b;
            y1 = d * x1 * x1 + m * x1 + n;
            cout << "x = " << x1 << " y = " << y1 << endl;
            return 0;
        }

        D = b * b - 4 * a * c;

        if (D > 0) {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            y1 = d * x1 * x1 + m * x1 + n;
            y2 = d * x2 * x2 + m * x2 + n;
            cout << "x1 = " << x1 << " y2 = " << y1 << endl;
            cout << "x1 = " << x2 << " y2 = " << y2 << endl;
        }
        else if (D == 0) {
            x1 = -b / (2 * a);
            y1 = d * x1 * x1 + m * x1 + n;
            cout << "x = " << x1 << " y = " << y1 << endl;
        }

    }

    return 0;
}
