#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Input x = ";
    cin >> x;
    cout << "Input y = ";
    cin >> y;

    if (y <= 1 && x <= 1 && y >= -x) cout << "Yes";
    else cout << "No";

    return 0;
}
