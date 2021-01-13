#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, h;
    float i;
    cout << "a, b, h = ";
    cin >> a >> b >> h;
    cout << "for" << endl;
    for (i = a; i < b; i += h)
        cout << "2cos(" << i << ") = " << 2 * cos(i) << endl;
    i = a;
    cout << "while" << endl;
    while (i < b) {
        cout << "2cos(" << i << ") = " << 2 * cos(i) << endl;
        i += h;
    }
    i = a;
    cout << "do" << endl;
    do {
        cout << "2cos(" << i << ") = " << 2 * cos(i) << endl;
        i += h;
    } while (i < b);

    return 0;
}
