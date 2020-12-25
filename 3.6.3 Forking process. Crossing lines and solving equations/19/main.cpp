#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, k, c, m, pp;
    float D;
    float x1, x2, i;
    float y1, y2, y3, y4;
    cout << "y = ax^4 + bx^2 + kx + c\nEnter a, b, k, c = ";
    cin >> a >> b >> k >> c;
    cout << "y = mx^2 + kx + p\nEnter m, p = ";
    cin >> m >> pp;

    if (a == 0 && b == m) cout << "No";
    else {
        // Опускаем k
        b -= m;
        c -= pp;
        if (a == 0) {
            x1 = c == 0 ? 0 : -c / b;
            if (x1 < 0)
                cout << "No" << endl;
            else {
                y1 = m * sqrt(x1) * sqrt(x1) + k * sqrt(x1) + pp;
                y2 = m * (-sqrt(x1)) * (-sqrt(x1)) + k * (-sqrt(x1)) + pp;
                cout << "x = " << sqrt(x1) << " y = " << y1 << endl;
                cout << "x = " << -sqrt(x1) << " y = " << y2 << endl;
            }
        }
        else {
            D = b * b - 4 * a * c;

            if (D > 0) {
                x1 = (-b + sqrt(D)) / (2 * a);
                if (x1 >= 0) {
                    x1 = sqrt(x1);
                    y1 = m * x1 * x1 + k * x1 + pp;
                    y2 = m * (-x1) * (-x1) + k * (-x1) + pp;
                    cout << "x = " << x1 << " y = " << y1 << endl;
                    cout << "x = " << -x1 << " y = " << y2 << endl;
                }
                else {
                    x1 = sqrt(-x1);
                    y1 = -m * x1 * x1 + pp;
                    y2 = k * x1;
                    cout << "x = " << x1 << "i y = " << y1 << " + " << y2 << "i" << endl;
                    cout << "x = " << -x1 << "i y = " << y1 << " - " << y2 << "i" << endl;

                }
                x2 = (-b - sqrt(D)) / (2 * a);
                if (x2 >= 0) {
                    x2 = sqrt(x2);
                    y3 = m * x2 * x2 + k * x2 + pp;
                    y4 = m * (-x2) * (-x2) + k * (-x2) + pp;
                    cout << "x = " << x2 << " y = " << y3 << endl;
                    cout << "x = " << -x2 << " y = " << y4 << endl;
                }
                else {
                    x2 = sqrt(-x2);
                    y1 = -m * x2 * x2 + pp;
                    y2 = k * x2;
                    cout << "x = " << x2 << "i y = " << y1 << " + " << y2 << "i" << endl;
                    cout << "x = " << -x2 << "i y = " << y1 << " - " << y2 << "i" << endl;
                }
            }
            else if (D == 0) {
                x1 = -b / (2 * a);
                if (x1 < 0) {
                    x1 = sqrt(-x1);
                    y1 = -m * x1 * x1 + pp;
                    y2 = k * x1;
                    cout << "x = " << x1 << "i y = " << y1 << " - " << y2 << "i" << endl;
                    cout << "x = " << -x1 << "i y = " << y1 << " + " << y2 << "i" << endl;
                }
                else {
                    x1 = sqrt(x1);
                    y1 = m * x1 * x1 + k * x1 + pp;
                    y2 = m * (-x1) * (-x1) + k * (-x1) + pp;
                    cout << "x = " << x1 << " y = " << y1 << endl;
                    cout << "x = " << -x1 << " y = " << y2 << endl;
                }
            }
            else {
                x1 = -b / (2 * a);
                i = sqrt(-D) / (2 * a);
                x2 = sqrt(x1 * x1 + i * i) * sin(atan(i / x1) / 2);
                x1 = sqrt(x1 * x1 + i * i) * cos(atan(i / x1) / 2);
                y1 = m * (x2 * x2 - x1 * x1) + k * x2 + pp;
                y2 = k * x1 + m * (2 * x1 * x2);
                cout << "x = " << x2 << " + " << -x1 << "i y = " << y1 << " - " << y2 << "i" << endl;
                cout << "x = " << x2 << " + " << x1 << "i y = " << y1 << " + " << y2 << "i" << endl;
                x2 = -x2;
                y1 = m * (x2 * x2 - x1 * x1) + k * x2 + pp;
                y2 = k * x1 + m * (2 * x1 * x2);
                cout << "x = " << x2 << " + " << x1 << "i y = " << y1 << " + " << y2 << "i" << endl;
                cout << "x = " << x2 << " + " << -x1 << "i y = " << y1 << " - " << y2 << "i" << endl;

            }
        }
        return 0;
    }
}
