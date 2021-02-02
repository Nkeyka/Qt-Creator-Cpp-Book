#include <iostream>

using namespace std;

int main()
{
    int N, temp, count = 0, count2 = 0, sumBefore = 0, sumAfter = 0;
    cout << "N = ";
    cin >> N;
    temp = N;
    do {
        count++;
        temp /= 10;
    } while (temp > 0);
    do {
        if (count2 < count / 2) sumAfter += N % 10;
        else if ((count2 >= count / 2 && count % 2 == 0) || (count2 > count / 2 && count % 2 == 1)) sumBefore += N % 10;
        count2++;
        N /= 10;
    } while (N > 0);
    (sumBefore == sumAfter) ? cout << "Yes" : cout << "No";
    return 0;
}
