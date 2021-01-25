#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int adj = 1;
    for (int i = 2; i < 8; i += 2)
            adj *= pow(2, i);
    cout << "adj = " << adj;
    return 0;
}
