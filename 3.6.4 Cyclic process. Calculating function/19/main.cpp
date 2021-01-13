#include <iostream>

using namespace std;

int main()
{
    float a, h;
    float i;
    cout << "a, h = ";
    cin >> a >> h;
    cout << "for" << endl;
    for (i = -a; i < a; i += h)
        cout << i << " - " << 2 * i * i + 3 * i - 1 << endl;
    i = -a;
    cout << "while" << endl;
    while (i < a) {
        cout << i << " - " << 2 * i * i + 3 * i - 1 << endl;
        i += h;
    }
    i = -a;
    cout << "do" << endl;
    do {
        cout << i << " - " << 2 * i * i + 3 * i - 1 << endl;
        i += h;
    } while (i < a);

    return 0;
}
