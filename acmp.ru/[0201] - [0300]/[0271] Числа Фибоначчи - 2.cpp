#include <iostream>
using namespace std;

int main() {
    long long int a = 1, b = 1, n = 2, t, temp;
    cin >> t;

    while (a < t) {
        temp = a;
        a += b;
        b = temp;
        n++;
    }

    if (a == t)
        cout << 1 << endl << n << endl;
    else
        cout << 0 << endl;

    return 0;
}