#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Input x = ";
    cin >> x;
    cout << "Input y = ";
    cin >> y;

    if (y <= 2 && y >= 1 && ((x >= -2 && x <= -1 ) || (x >= 1 && x <= 4))) cout << "Yes";
    else cout << "No";
    return 0;
}
