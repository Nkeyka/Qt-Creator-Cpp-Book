#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Input x = ";
    cin >> x;
    cout << "Input y = ";
    cin >> y;

    if ((x - 5) * (x - 5) + (y - 3) * (y - 3) <= 9 && !((x - 5) * (x - 5) + (y - 3) * (y - 3) < 4)) cout << "Yes";
    else cout << "No";

    return 0;
}
