#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float i;
    cout << "for" << endl;
    for (i = - 2 * M_PI; i < 2 * M_PI; i += M_PI / 8)
        cout << "cos(" << i << ") = " << cos(i) << endl;
    i = - 2 * M_PI;
    cout << "while" << endl;
    while (i < 2 * M_PI) {
        cout << "cos(" << i << ") = " << cos(i) << endl;
        i += M_PI / 8;
    }
    i = - 2 * M_PI;
    cout << "do" << endl;
    do {
        cout << "cos(" << i << ") = " << cos(i) << endl;
        i += M_PI / 8;
    } while (i < 2 * M_PI);

    return 0;
}
