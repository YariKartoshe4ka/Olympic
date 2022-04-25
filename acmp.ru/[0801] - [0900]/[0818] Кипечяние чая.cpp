#include <iostream>
using namespace std;

int main() {
    int n, i, t;
    long int s = 0;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> t;
        s += t;
    }

    cout << s - n + 1 << endl;

    return 0;
}
