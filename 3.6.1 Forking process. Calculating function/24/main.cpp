#include <iostream>

using namespace std;

int main()
{
    float a, y;
    cout << "Input a = ";
    cin >> a;
    if (a <= 0) y = -a;
    else if (a > 0 && a <= 4) y = 3;
    else y = -a + 7;
    cout << "y = " << y;
    return 0;
}
