#include <iostream>

using namespace std;

int main()
{
    int N, count = 0;
    cout << "N = ";
    cin >> N;
    for (int i = 5; i < N; i += 5)
        count++;
    cout << "count = " << count;
    return 0;
}
