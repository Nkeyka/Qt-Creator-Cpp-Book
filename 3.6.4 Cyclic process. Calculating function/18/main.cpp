#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i;
    cout << "for" << endl;
    for (i = 1; i < 11; i++)
        cout << i << " - " << cbrt(i) << endl;
    i = 1;
    cout << "while" << endl;
    while (i < 11) {
        cout << i << " - " << cbrt(i) << endl;
        i++;
    }
    i = 1;
    cout << "do" << endl;
    do {
        cout << i << " - " << cbrt(i) << endl;
        i++;
    } while(i < 11);

    return 0;
}
