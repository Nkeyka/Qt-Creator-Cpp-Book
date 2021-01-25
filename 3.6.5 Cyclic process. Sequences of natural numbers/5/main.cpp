#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    for (int i = 11; i < 100; i++)
        if (i % 10 != 0)
            count++;
    cout << "count = " << count;
    return 0;
}
