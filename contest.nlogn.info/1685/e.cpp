#include <iostream>
using namespace std;


int main() {
    short t, a, b;
    cin >> t;

    for (short i = 0; i < t; i++) {
        cin >> a >> b;
        cout << a * b << endl;
    }

    return 0;
}