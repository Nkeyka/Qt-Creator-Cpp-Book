#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "for" << endl;
    for (i = 2; i < 2 * 11; i += 2)
        cout << i << " - " << i * i << endl;
    i = 2;
    cout << "while" << endl;
    while (i < 2 * 11) {
        cout << i << " - " << i * i << endl;
        i += 2;
    }
    i = 2;
    cout << "do" << endl;
    do {
        cout << i << " - " << i * i << endl;
        i += 2;
    } while(i < 2 * 11);

    return 0;
}
