/* С начала суток прошло N секунд.
 * Найти количество полных часов,
 * прошедших с начала суток и остаток в секундах. */

#include <iostream>

using namespace std;

int main()
{
    int N, hours, seconds;
    cout << "Enter seconds = ";
    cin >> N;
    hours = N / 60 / 60;
    seconds = 60 * 60 * 24 - N;
    cout << hours << " hours" << endl << seconds << " seconds" << endl;
    return 0;
}
