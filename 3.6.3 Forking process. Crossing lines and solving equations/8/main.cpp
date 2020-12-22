#include <iostream>

using namespace std;

int main()
{
    float a, b, k, m, x, y;
    cout << "y = ax + b\nEnter a, b = ";
    cin >> a >> b;
    cout << "y = kx + m\nEnter k, m = ";
    cin >> k >> m;

    if (a == k) cout << "No";
    else {

        /* a * x + b = k * x + m
         * => a * x - k * x = m - b
         * => x = (m - b) / (a - k) */

        x = (m - b) / (a - k);

        y = a * x + b;

        cout << "x = " << x << " y = " << y;
    }

    return 0;
}
