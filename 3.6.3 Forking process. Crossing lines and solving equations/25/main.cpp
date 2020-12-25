#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Enter x, y = ";
    cin >> x >> y;

    if (x > 0 && y > 0) cout << "I" << endl;
    else if (x > 0 && y < 0) cout << "II" << endl;
    else if (x < 0 && y < 0) cout << "III" << endl;
    else if (x < 0 && y > 0) cout << "IV" << endl;

    return 0;
}
