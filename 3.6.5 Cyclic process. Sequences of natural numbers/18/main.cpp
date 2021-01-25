#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 100; i <= 995; i += 5)
        if (i % 5 == 0 && i % 10 != 0)
            sum += i;
    cout << "sum = " << sum;
    return 0;
}
