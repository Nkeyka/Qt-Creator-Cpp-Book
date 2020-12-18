#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Input x = ";
    cin >> x;
    cout << "Input y = ";
    cin >> y;

    if (y <= 1.25 * x + 1.5 && y <= -5 * x + 14 && y >= -1) cout << "Yes";
    else cout << "No";

    return 0;
}
