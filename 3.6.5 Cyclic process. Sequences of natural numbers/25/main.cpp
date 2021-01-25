#include <iostream>

using namespace std;

int main()
{
   int sum = 1;
    for (int i = 12; i <= 99; i += 3)
        if (i % 10 != 0)
            sum += i;
    cout << "sum = " << sum;
    return 0;
}
