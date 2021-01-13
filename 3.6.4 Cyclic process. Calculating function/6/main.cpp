#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float i;
    cout << "for" << endl;
    for (i = 0; i < 2 * M_PI; i += M_PI / 10)
        cout << "cos2(" << i << ") = " << cos(i) * cos(i) << endl;
    i = 0;
    cout << "while" << endl;
    while (i < 2 * M_PI) {
        cout << "cos2(" << i << ") = " << cos(i) * cos(i) << endl;
        i += M_PI / 10;
    }
    i = 0;
    cout << "do" << endl;
    do {
        cout << "cos2(" << i << ") = " << cos(i) * cos(i) << endl;
        i += M_PI / 10;
    } while (i < 2 * M_PI);

    return 0;
}
