#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i <= 10; i++)
        sum += pow(2, i);
    cout << "sum = " << sum;
    return 0;
}
