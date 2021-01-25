#include <iostream>

using namespace std;

int main()
{
    int adj = 1;
    for (int i = 1; i < 15; i++)
        adj *= i;
    cout << "adj = " << adj;
    return 0;
}
