#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i < 9; i += 2)
            sum += pow(2, i);
    cout << "sum = " << sum;
    return 0;
}
