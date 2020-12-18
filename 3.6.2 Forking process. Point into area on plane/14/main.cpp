#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Input x = ";
    cin >> x;
    cout << "Input y = ";
    cin >> y;

    if (x * x + y * y <= 9 && (y <= 0 || x <= 0)) cout << "Yes";
    else cout << "No";

    return 0;
}
