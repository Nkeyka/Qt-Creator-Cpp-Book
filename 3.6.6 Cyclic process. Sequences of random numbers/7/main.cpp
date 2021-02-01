#include <iostream>

using namespace std;

int main()
{
    int temp, sum = 0, count = -1;
    do {
        cin >> temp;
        sum += temp;
        count++;
    } while(temp != 0);
    cout << (float) sum / count;
    return 0;
}
