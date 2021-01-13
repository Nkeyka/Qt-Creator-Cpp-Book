#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float i;
    cout << "for" << endl;
    for (i = -3; i < 4; i += 0.5)
        cout << i << " - " << -1.8 * i * i * i - exp(2) * i + 1. / 6 << endl;
    i = -3;
    cout << "while" << endl;
    while (i < 4) {
        cout << i << " - " << -1.8 * i * i * i - exp(2) * i + 1. / 6 << endl;
        i += 0.5;
    }
    i = -3;
    cout << "do" << endl;
    do {
        cout << i << " - " << -1.8 * i * i * i - exp(2) * i + 1. / 6 << endl;
        i += 0.5;
    } while (i < 4);

    return 0;
}
