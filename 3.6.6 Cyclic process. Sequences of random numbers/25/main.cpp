#include <iostream>

using namespace std;

int main()
{
    int temp, oldtemp, count = 0;
    bool exist = false;
    int N;
    cout << "N = ";
    cin >> N;
    cin >> temp;
    exist = true;
    for (int i = 1; i < N; i++) {
        oldtemp = temp;
        cin >> temp;
        if (temp == oldtemp)  {
            if (exist) {
                count++;
                exist = false;
            }
            count++;
        }
        else exist = true;
    }
    cout << count;
    return 0;
}
