#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;

    while (a > 1) {
        if (a % 2 != 0) {
            b += 1;
            a /= 2;
        } else {
            a /= 2;
        }
        cout << a << endl;
    };

    cout << b;

    return 0;
}