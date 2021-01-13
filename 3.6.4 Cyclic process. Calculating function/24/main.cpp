#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float i;
    cout << "for" << endl;
    for (i = -2; i < 2; i += 0.25)
        cout << i << " - " << -1.3 * i * i - exp(i) / 4 << endl;
    i = -2;
    cout << "while" << endl;
    while (i < 2) {
        cout << i << " - " << -1.3 * i * i - exp(i) / 4 << endl;
        i += 0.25;
    }
    i = -2;
    cout << "do" << endl;
    do {
        cout << i << " - " << -1.3 * i * i - exp(i) / 4 << endl;
        i += 0.25;
    } while (i < 2);

    return 0;
}
