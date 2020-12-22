#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, d, m, n, pp;
    float D;
    float x1, x2;
    float y1, y2;
    cout << "y = ax^3 + bx^2 + cx + d\nEnter a, b, c, d = ";
    cin >> a >> b >> c >> d;
    cout << "y = ax^3 + mx^2 + nx + p\nEnter m, n, p = ";
    cin >> m >> n >> pp;

    if (b == m && c == n) cout << "No";
    else {
        a = 0;
        b -= m;
        c -= n;
        d -= pp;

        if (b == 0) {
            x1 = d == 0 ? 0 : c / (-d);
            y1 = n * x1 + pp;
            cout << "x = " << x1 << " y = " << y1 << endl;
            return 0;
        }
        else {
            D = c * c - 4 * b * d;

            if (D > 0) {
                x1 = (-c + sqrt(D)) / (2 * b);
                x2 = (-c - sqrt(D)) / (2 * b);
                y1 = m * x1 * x1 + n * x1 + pp;
                y2 = m * x2 * x2 + n * x2 + pp;
                cout << "x = " << x1 << " y = " << y1 << endl;
                cout << "x = " << x2 << " y = " << y2 << endl;
            }
            else if (D == 0) {
                x1 = -c / (2 * b);
                y1 = m * x1 * x1 + n * x1 + pp;
                cout << "x = " << x1 << " y = " << y1 << endl;
            }
            else
                cout << "No";
            return 0;
        }

        return 0;
    }
}
