#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i;
    cout << "for" << endl;
    for (i = 0; i < 10; i++)
        cout << i << " - " << pow(2, i) << endl;
    i = 0;
    cout << "while" << endl;
    while (i < 10) {
        cout << i << " - " << pow(2, i) << endl;
        i++;
    }
    i = 0;
    cout << "do" << endl;
    do {
        cout << i << " - " << pow(2, i) << endl;
        i++;
    } while(i < 10);

    return 0;
}
