#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Input x = ";
    cin >> x;
    cout << "Input y = ";
    cin >> y;

    if (x >= -1 && x <= 6 && y >= -1 && y <= 6 && !(x > 0 && x < 4 && y > 0 && y < 4)) cout << "Yes";
    else cout << "No";

    return 0;
}
