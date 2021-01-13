#include <iostream>

using namespace std;

int main()
{
    float a, b, h;
    float i;
    cout << "a, b, h = ";
    cin >> a >> b >> h;
    cout << "for" << endl;
    for (i = a; i < b; i += h)
        cout << i << " - " << 5.4 * i * i * i - 2.8 * i * i - i + 1.6 << endl;
    i = a;
    cout << "while" << endl;
    while (i < b) {
        cout << i << " - " << 5.4 * i * i * i - 2.8 * i * i - i + 1.6 << endl;
        i += h;
    }
    i = a;
    cout << "do" << endl;
    do {
        cout << i << " - " << 5.4 * i * i * i - 2.8 * i * i - i + 1.6 << endl;
        i += h;
    } while (i < b);

    return 0;
}
