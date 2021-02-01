#include <iostream>

using namespace std;

int main()
{
    int count = 0, count2 = 0, temp;
    int N;
    cout << "N = ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        if (temp % 2 == 0) count++;
        else count2++;
    }
    cout << "even " << count << " odd " << count2;
    return 0;
}
