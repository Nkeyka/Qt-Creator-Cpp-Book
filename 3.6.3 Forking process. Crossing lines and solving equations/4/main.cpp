#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float r, a, b, D, x1, x2, y1, y2;
    cout << "Enter r = ";
    cin >> r;
    cout << "y = ax + b\nEnter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;

    /* | x * x + y * y = r * r
     * | y = a * x + b
     * => x * x + (a * x + b) * (a * x + b) = r * r
     * => x * x + (a * a * x * x + 2 * a * b * x + b * b) = r * r
     * = > (a * a + 1) * x * x + 2 * a * b * x + b * b - r * r = 0 */

    // b * b - 4 * a * c
    D = 2 * a * b * 2 * a * b - 4 * (a * a + 1) * (b * b - r * r);

    if (D > 0) {
        x1 = (-2 * a * b + sqrt(D)) / (2 * (a * a + 1));
        x2 = (-2 * a * b - sqrt(D)) / (2 * (a * a + 1));
        y1 = a * x1 + b;
        y2 = a * x2 + b;
        cout << "Point 1 (x, y) = " << x1 << ", " << y1 << endl;
        cout << "Point 2 (x, y) = " << x2 << ", " << y2;
    }
    else if (D == 0) {
        x1 = (-2 * a * b) / (2 * (a * a + 1));
        y1 = a * x1 + b;
        cout << "Point (x, y) = " << x1 << ", " << y1;
    }
    else cout << "No point";

    return 0;
}
