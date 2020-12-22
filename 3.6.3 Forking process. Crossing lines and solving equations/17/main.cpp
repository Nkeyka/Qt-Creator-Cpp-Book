#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, k, m;
    float D;
    float x1, x2;
    float y1, y2;
    cout << "y = ax^2 + bx + c\nEnter a, b, c = ";
    cin >> a >> b >> c ;

    k = 0;
    m = 0;

    if (a == 0 && b == k) cout << "No";
    else {
        if (a == 0) {
            x1 = -c / b;
            y1 = k * x1 + m;
            cout << "x = " << x1 << " y = " << y1 << endl;
            return 0;
        }

        D = b * b - 4 * a * c;

        if (D > 0) {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            y1 = k * x1 + m;
            y2 = k * x2 + m;
            cout << "x1 = " << x1 << " y2 = " << y1 << endl;
            cout << "x1 = " << x2 << " y2 = " << y2 << endl;
        }
        else if (D == 0) {
            x1 = -b / (2 * a);
            y1 = k * x1 + m;
            cout << "x = " << x1 << " y = " << y1 << endl;
        }
        else
            cout << "No";

    }

    return 0;
}
