#include <iostream>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a <= 0) y = -a;
    else y = 0.5 * a + 1;
    cout << "y = " << y;
    return 0;
}
