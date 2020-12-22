#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3, d1, d2, d3;
    cout << "Enter A x1, y1 = ";
    cin >> x1 >> y1;
    cout << "Enter B x2, y2 = ";
    cin >> x2 >> y2;
    cout << "Enter C x3, y3 = ";
    cin >> x3 >> y3;

    d1 = sqrt(x1 * x1 + y1 * y1);
    d2 = sqrt(x2 * x2 + y2 * y2);
    d3 = sqrt(x3 * x3 + y3 * y3);

    if (d1 > d2 && d1 > d3) cout << "A" << endl;
    if (d2 > d1 && d2 > d3) cout << "B" << endl;
    if (d3 > d1 && d3 > d2) cout << "C" << endl;

    return 0;
}
