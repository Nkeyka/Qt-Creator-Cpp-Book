#include <iostream>

using namespace std;

int main()
{
    int count = -1, sum = 0;
    float temp;
    do {
        cin >> temp;
        sum += temp;
        count++;
    } while(temp != 0);
    cout << "sum " << sum << " count " << count;
    return 0;
}
