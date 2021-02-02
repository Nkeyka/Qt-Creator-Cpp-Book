#include <iostream>

using namespace std;

int main()
{
    int N, adj;
    cout << "N = ";
    cin >> N;
    adj = 0;
    do {
        if (N % 10 > 0) {
            if (adj == 0) adj = 1;
            adj *= N % 10;
        }
        N /= 10;
    } while (N > 0);
    cout << adj;
    return 0;
}
