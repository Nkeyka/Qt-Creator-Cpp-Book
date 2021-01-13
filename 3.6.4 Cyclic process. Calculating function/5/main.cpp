#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float i;
    cout << "for" << endl;
    for (i = -M_PI; i < M_PI; i += M_PI / 12)
        cout << "sin2(" << i << ") = " << sin(i) * sin(i) << endl;
    i = -M_PI;
    cout << "while" << endl;
    while (i < M_PI) {
        cout << "sin2(" << i << ") = " << sin(i) * sin(i) << endl;
        i += M_PI / 12;
    }
    i = -M_PI;
    cout << "do" << endl;
    do {
        cout << "sin2(" << i << ") = " << sin(i) * sin(i) << endl;
        i += M_PI / 12;
    } while (i < M_PI);

    return 0;
}
