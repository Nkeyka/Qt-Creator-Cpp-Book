#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sum = 0, adj = 1;
    for (int i = 0; i <= 5; i++) {
        sum += pow(3, i);
    }
    for (int i = 1; i <= 5; i++) {
        adj *= i;
    }
    cout << "P = " << (float) sum / adj;
    return 0;
}
