#include <iostream>
using namespace std;

int main() {
    int a, b = 0;
    cin >> a;

    while (a > 0) {
        if (a % 2)
            b++;
        a /= 2;
    };

    cout << b << endl;

    return 0;
}