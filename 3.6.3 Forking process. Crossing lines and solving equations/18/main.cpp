#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, d, ff, m, pp;
    float D;
    float x1, x2, i;
    float y1, y2, y3, y4;
    cout << "y = ax^4 + bx^3 + cx^2 + dx + f\nEnter a, b, c, d, f = ";
    cin >> a >> b >> c >> d >> ff;
    cout << "y = bx^3 + mx^2 + dx + p\nEnter m, p = ";
    cin >> m >> pp;

    if (a == 0 && c == m) cout << "No";
    else {
        // Опускаем b, d
        c -= m;
        ff -= pp;
        if (a == 0) {
            x1 = ff == 0 ? 0 : -ff / c;
            if (x1 < 0)
                cout << "No" << endl;
            else {
                y1 = b * sqrt(x1) * sqrt(x1) * sqrt(x1) + m * sqrt(x1) * sqrt(x1) + d * sqrt(x1) + pp;
                y2 = b * (-sqrt(x1)) * (-sqrt(x1)) * (-sqrt(x1)) + m * (-sqrt(x1)) * (-sqrt(x1)) + d * (-sqrt(x1)) + pp;
                cout << "x = " << sqrt(x1) << " y = " << y1 << endl;
                cout << "x = " << -sqrt(x1) << " y = " << y2 << endl;
            }
        }
        else {
            D = c * c - 4 * a * ff;

            if (D > 0) {
                x1 = (-c + sqrt(D)) / (2 * a);
                if (x1 >= 0) {
                    x1 = sqrt(x1);
                    y1 = b * x1 * x1 * x1 + m * x1 * x1 + d * x1 + pp;
                    y2 = b * (-x1) * (-x1) * (-x1) + m * (-x1) * (-x1) + d * (-x1) + pp;
                    cout << "x = " << x1 << " y = " << y1 << endl;
                    cout << "x = " << -x1 << " y = " << y2 << endl;
                }
                else {
                    x1 = sqrt(-x1);
                    y1 = -m * x1 * x1 + pp;
                    y2 = -b * x1 * x1 * x1 + d * x1;
                    cout << "x = " << x1 << "i y = " << y1 << " - " << y2 << "i" << endl;
                    cout << "x = " << -x1 << "i y = " << y1 << " + " << y2 << "i" << endl;

                }
                x2 = (-c - sqrt(D)) / (2 * a);
                if (x2 >= 0) {
                    y3 = b * sqrt(x2) * sqrt(x2) * sqrt(x2) + m * sqrt(x2) * sqrt(x2) + d * sqrt(x2) + pp;
                    y4 = b * (-sqrt(x2)) * (-sqrt(x2)) * (-sqrt(x2)) + m * (-sqrt(x2)) * (-sqrt(x2)) + d * (-sqrt(x2)) + pp;
                    cout << "x = " << sqrt(x2) << " y = " << y3 << endl;
                    cout << "x = " << -sqrt(x2) << " y = " << y4 << endl;
                }
                else {
                    x2 = sqrt(-x2);
                    y1 = -m * x2 * x2 + pp;
                    y2 = -b * x2 * x2 * x2 + d * x2;
                    cout << "x = " << x2 << "i y = " << y1 << " - " << y2 << "i" << endl;
                    cout << "x = " << -x2 << "i y = " << y1 << " + " << y2 << "i" << endl;
                }
            }
            else if (D == 0) {
                x1 = -c / (2 * a);
                if (x1 < 0) {
                    x1 = sqrt(-x1);
                    y1 = -m * x1 * x1 + pp;
                    y2 = -b * x1 * x1 * x1 + d * x1;
                    cout << "x = " << x1 << "i y = " << y1 << " - " << y2 << "i" << endl;
                    cout << "x = " << -x1 << "i y = " << y1 << " + " << y2 << "i" << endl;
                }
                else {
                    y1 = b * sqrt(x1) * sqrt(x1) * sqrt(x1) + m * sqrt(x1) * sqrt(x1) + d * sqrt(x1) + pp;
                    y2 = b * (-sqrt(x1)) * (-sqrt(x1)) * (-sqrt(x1)) + m * (-sqrt(x1)) * (-sqrt(x1)) + d * (-sqrt(x1)) + pp;
                    cout << "x = " << sqrt(x1) << " y = " << y1 << endl;
                    cout << "x = " << -sqrt(x1) << " y = " << y2 << endl;
                }
            }
            else {
                x1 = -c / (2 * a);
                i = sqrt(-D) / (2 * a);
                x2 = sqrt(x1 * x1 + i * i) * sin(atan(i / x1) / 2);
                x1 = sqrt(x1 * x1 + i * i) * cos(atan(i / x1) / 2);
                y1 = b * (x2 * x2 * x2 - 3 * x1 * x1 * x2) + m * (x2 * x2 - x1 * x1) + d * x2 + pp;
                y2 = b * (3 * x1 * x2 * x2 - x1 * x1 * x1) + d * x1 + m * (2 * x1 * x2);
                cout << "x = " << x2 << " + " << -x1 << "i y = " << y1 << " - " << y2 << "i" << endl;
                cout << "x = " << x2 << " + " << x1 << "i y = " << y1 << " + " << y2 << "i" << endl;
                x2 = -x2;
                y1 = b * (x2 * x2 * x2 - 3 * x1 * x1 * x2) + m * (x2 * x2 - x1 * x1) + d * x2 + pp;
                y2 = b * (3 * x1 * x2 * x2 - x1 * x1 * x1) + d * x1 + m * (2 * x1 * x2);
                cout << "x = " << x2 << " + " << x1 << "i y = " << y1 << " + " << y2 << "i" << endl;
                cout << "x = " << x2 << " + " << -x1 << "i y = " << y1 << " - " << y2 << "i" << endl;

            }
        }
        return 0;
    }
}
