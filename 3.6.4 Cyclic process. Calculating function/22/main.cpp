#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i;
    cout << "for" << endl;
    for (i = 1; i < 2 * 10; i += 2)
        cout << i << " - " << sqrt(i) << endl;
    i = 1;
    cout << "while" << endl;
    while (i < 2 * 10) {
        cout << i << " - " << sqrt(i) << endl;
        i += 2;
    }
    i = 1;
    cout << "do" << endl;
    do {
        cout << i << " - " << sqrt(i) << endl;
        i += 2;
    } while(i < 2 * 10);

    return 0;
}
