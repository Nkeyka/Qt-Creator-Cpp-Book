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
        cout << "exp(" << 2 * i << ") = " << exp(2 * i) << endl;
    i = -a;
    cout << "while" << endl;
    while (i < a) {
        cout << "exp(" << 2 * i << ") = " << exp(2 * i) << endl;
        i += h;
    }
    i = -a;
    cout << "do" << endl;
    do {
        cout << "exp(" << 2 * i << ") = " << exp(2 * i) << endl;
        i += h;
    } while (i < a);

    return 0;
}
