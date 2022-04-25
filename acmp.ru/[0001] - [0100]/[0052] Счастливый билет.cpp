#include <iostream>
#include <cstring>
using namespace std;


int main() {
    string n;
    short int a[6];

    cin >> n;

    for (int i = 0; i < 6; i++) {
        if (i < 6 - n.length())
            a[i] = 0;
        else
            a[i] = int(n[i]);
    }

    if (a[0] + a[1] + a[2] == a[3] + a[4] + a[5])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
