#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Input x = ";
    cin >> x;
    cout << "Input y = ";
    cin >> y;

    if (x >= -3 && x <= 3 && y >= -3 && y <= 3) cout << "Yes";
    else cout << "No";

    return 0;
}
