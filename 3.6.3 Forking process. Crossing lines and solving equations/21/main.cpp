#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c;
    float D;
    float x1, x2, i;
    cout << "y = ax^4 + bx^2 + c\nEnter a, b, c = ";
    cin >> a >> b >> c;

    if (a == 0) {
        x1 = c == 0 ? 0 : -c / b;
        if (x1 < 0) {
            x1 = sqrt(-x1);
            cout << "x = " << x1 << "i" << endl;
            cout << "x = " << -x1 << "i" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        D = b * b - 4 * a * c;

        if (D > 0) {
            x1 = (-b + sqrt(D)) / (2 * a);
            if (x1 < 0) {
                x1 = sqrt(-x1);
                cout << "x = " << x1 << "i" << endl;
                cout << "x = " << -x1 << "i" << endl;
            }
            x2 = (-b - sqrt(D)) / (2 * a);
            if (x2 < 0) {
                x2 = sqrt(-x2);
                cout << "x = " << x2 << "i" << endl;
                cout << "x = " << -x2 << "i" << endl;
            }
            if ((-b + sqrt(D)) / (2 * a) >= 0 && (-b - sqrt(D)) / (2 * a) >= 0) cout << "No" << endl;
        }
        else if (D == 0) {
            x1 = -b / (2 * a);
            if (x1 < 0) {
                x1 = sqrt(-x1);
                cout << "x = " << x1 << "i" << endl;
                cout << "x = " << -x1 << "i" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            x1 = -b / (2 * a);
            i = sqrt(-D) / (2 * a);
            x2 = sqrt(x1 * x1 + i * i) * sin(atan(i / x1) / 2);
            x1 = sqrt(x1 * x1 + i * i) * cos(atan(i / x1) / 2);
            cout << "x = " << x2 << " - " << x1 << "i" << endl;
            cout << "x = " << x2 << " + " << x1 << "i" << endl;
            x2 = -x2;
            cout << "x = " << x2 << " + " << x1 << "i" << endl;
            cout << "x = " << x2 << " - " << x1 << "i" << endl;

        }
    }
    return 0;
}
