#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    for (int i = 11; i <= 99; i += 2)
        if (i % 5 != 0)
            count++;
    cout << "count = " << count;
    return 0;
}
