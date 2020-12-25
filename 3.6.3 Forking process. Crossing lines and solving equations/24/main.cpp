#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, y1, z1, x2, y2, z2, d1, d2;
    cout << "Enter A x1, y1, z1 = ";
    cin >> x1 >> y1 >> z1;
    cout << "Enter B x2, y2, z2 = ";
    cin >> x2 >> y2 >> z2;

    d1 = sqrt(x1 * x1 + y1 * y1 + z1 * z1);
    d2 = sqrt(x2 * x2 + y2 * y2 + z2 * z2);

    if (d1 < d2) cout << "A" << endl;
    else if (d2 < d1) cout << "B" << endl;
    else cout << "Equal" << endl;

    return 0;
}
