#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, d;
    float D;
    float x1, x2;
    float p, q, i;
    cout << "y = ax^3 + bx^2 + cx + d\nEnter a, b, c, d = ";
    cin >> a >> b >> c >> d;

    if (a == 0) {
        if (c == 0) {
            x1 = d == 0 ? 0 : -d / b;
            if (x1 < 0) {
                x1 = sqrt(-x1);
                cout << "x = " << x1 << "i" << endl;
                cout << "x = " << -x1 << "i" << endl;
            }
            else {
                cout << "No" << endl;
            }
            return 0;
        }
        else {
            D = c * c - 4 * b * d;

            if (D < 0) {
                x1 = -c / (2 * b);
                i = sqrt(-D) / (2 * b);
                x2 = sqrt(x1 * x1 + i * i) * sin(atan(i / x1) / 2);
                x1 = sqrt(x1 * x1 + i * i) * cos(atan(i / x1) / 2);
                cout << "x = " << x2 << " - " << x1 << "i" << endl;
                cout << "x = " << x2 << " + " << x1 << "i" << endl;
                x2 = -x2;
                cout << "x = " << x2 << " + " << x1 << "i" << endl;
                cout << "x = " << x2 << " - " << x1 << "i" << endl;
            }
            else
                cout << "No";
            return 0;
        }
    }

    p = (3 * a * c - b * b) / (3 * a * a);
    q = (2 * b * b * b - 9 * a * b * c + 27 * a * a * d) / (27 * a * a * a);
    D = pow(q / 2, 2) + pow(p / 3, 3);

    if (D > 0) {
        i = sqrt(3) / 2 * (cbrt(-q / 2 + sqrt(D)) - cbrt(-q / 2 - sqrt(D)));
        x1 = cbrt(-q / 2 + sqrt(D)) + cbrt(-q / 2 - sqrt(D)) - b / 3 / a;
        x2 = -1. / 2 * (cbrt(-q / 2 + sqrt(D)) + cbrt(-q / 2 - sqrt(D))) - b / 3 / a;

        cout << "x = " << x2 << " + i" << i << endl;
        cout << "x = " << x2 << " - i" << i <<  endl;
    }
    else {
        cout << "No";
    }


    return 0;
}
