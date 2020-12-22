#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, d, k, m;
    float D;
    float x1, x2, x3;
    float p, q, y1, y2, y3, i, f;
    cout << "y = ax^3 + bx^2 + cx + d\nEnter a, b, c, d = ";
    cin >> a >> b >> c >> d;
    cout << "y = kx + m\nEnter k, m = ";
    cin >> k >> m;

    if (a == 0 && b == 0 && c == k) cout << "No";
    else {
        /* a * x * x * x + b * x * x + c * x + d = k * x + m
         * a * x * x * x + b * x * x + (c - k) * x + (d - m) = 0 */

        c -= k;
        d -= m;

        p = (3 * a * c - b * b) / (3 * a * a);
        q = (2 * b * b * b - 9 * a * b * c + 27 * a * a * d) / (27 * a * a * a);
        D = pow(q / 2, 2) + pow(p / 3, 3);

        if (D > 0) {
            y1 = cbrt(-q / 2 + sqrt(D)) + cbrt(-q / 2 - sqrt(D));
            y2 = -1. / 2 * (cbrt(-q / 2 + sqrt(D)) + cbrt(-q / 2 - sqrt(D)));
            i = sqrt(3) / 2 * (cbrt(-q / 2 + sqrt(D)) - cbrt(-q / 2 - sqrt(D)));
            x1 = y1 - b / 3 / a;
            x2 = y2 - b / 3 / a;

            cout << "x1 = " << x1 << " y1 = " << y1 << endl;
            cout << "x2 = " << x2 << " + i" << i << " y2 = " << y2 << " + i" << i << endl;
            cout << "x3 = " << x2 << " - i" << i << " y3 = " << y2 << " - i" << i << endl;
        }
        else if (D == 0) {
            if (p == 0 && q == 0) {
                y1 = 0;
                x1 = -b / 3 / a;
                cout << "x1 = " << x1 << " y1 = " << y1 << endl;
            }
            else {
                y1 = 2 * cbrt(-q / 2);
                y2 = -cbrt(-q / 2);
                x1 = y1 - b / 3 / a;
                x2 = y2 - b / 3 / a;
                cout << "x1 = " << x1 << " y1 = " << y1 << endl;
                cout << "x2 = " << x2 << " y2 = " << y2 << endl;
            }

        }
        else {
            if (q < 0)
                f = atan(sqrt(-D) / (-q / 2));
            else if (q > 0)
                f = atan(sqrt(-D) / (-q / 2)) + M_PI;
            else
                f = M_PI_2;

            y1 = 2 * sqrt(-p / 3) * cos(f / 3);
            y2 = 2 * sqrt(-p / 3) * cos(f / 3 + 2 * M_PI / 3);
            y3 = 2 * sqrt(-p / 3) * cos(f / 3 + 4 * M_PI / 3);
            x1 = y1 - b / 3 / a;
            x2 = y2 - b / 3 / a;
            x3 = y3 - b / 3 / a;

            cout << "x1 = " << x1 << " y1 = " << y1 << endl;
            cout << "x2 = " << x2 << " y2 = " << y2 << endl;
            cout << "x3 = " << x3 << " y3 = " << y3 << endl;
        }

    }

    return 0;
}
