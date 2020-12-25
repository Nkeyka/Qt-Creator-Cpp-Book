#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c;
    float D;
    float x1, i;
    cout << "y = ax^2 + bx + c\nEnter a, b, c = ";
    cin >> a >> b >> c;

    if (b == 0) {
        x1 = c == 0 ? 0 : -c / a;
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

        if (D < 0) {
            x1 = -b / (2 * a);
            i = sqrt(-D) / (2 * a);
            cout << "x = " << x1 << " - " << i << "i" << endl;
            cout << "x = " << x1 << " + " << i << "i" << endl;
        }
        else {
            cout << "No" << endl;

        }
    }
    return 0;
}
