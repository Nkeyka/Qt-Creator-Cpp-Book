#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Input x = ";
    cin >> x;
    cout << "Input y = ";
    cin >> y;

    if (y <= 4 * x + 1 && y <= -x + 6 && y >= 1) cout << "Yes";
    else cout << "No";

    return 0;
}
