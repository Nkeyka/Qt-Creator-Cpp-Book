#include <iostream>

using namespace std;

int main()
{
    int N, count = 0;
    cout << "N = ";
    cin >> N;
    for (int i = 3; i < N; i += 3)
        count++;
    cout << "count = " << count;
    return 0;
}
