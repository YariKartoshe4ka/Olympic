#include <iostream>
using namespace std;

int main() {
    int s = 0, t;

    for (int i = 0; i < 31; i++) {
        cin >> t;
        s += t;
    }

    cout << s / 27 << endl;

    return 0;
}