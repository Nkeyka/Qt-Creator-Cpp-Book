#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Input x = ";
    cin >> x;
    cout << "Input y = ";
    cin >> y;

    if (x >= 2 && x <= 7 && y >= 1 && y <= 5 && !(x > 3 && x < 6 && y > 2 && y < 4)) cout << "Yes";
    else cout << "No";

    return 0;
}
