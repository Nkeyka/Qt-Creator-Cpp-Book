/* С начала суток прошло N секунд.
 * Найти количество полных минут,
 * прошедших с начала суток и остаток в секундах. */

#include <iostream>

using namespace std;

int main()
{
    int N, minutes, seconds;
    cout << "Enter seconds = ";
    cin >> N;
    minutes = N / 60;
    seconds = 60 * 60 * 24 - N;
    cout << minutes << " minutes" << endl << seconds << " seconds" << endl;
    return 0;
}
