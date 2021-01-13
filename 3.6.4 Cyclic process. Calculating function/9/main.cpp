#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, h;
    float i;
    cout << "a, h = ";
    cin >> a >> h;
    cout << "for" << endl;
    for (i = -a; i < a; i += h)
        cout << "2sin(" << i << ") = " << 2 * sin(i) << endl;
    i = -a;
    cout << "while" << endl;
    while (i < a) {
        cout << "2sin(" << i << ") = " << 2 * sin(i) << endl;
        i += h;
    }
    i = -a;
    cout << "do" << endl;
    do {
        cout << "2sin(" << i << ") = " << 2 * sin(i) << endl;
        i += h;
    } while (i < a);

    return 0;
}
