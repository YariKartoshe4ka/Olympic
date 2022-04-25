#include <iostream>
using namespace std;

int main() {
    short int n, a, t;
    cin >> n;
    a = n;

    for (int i = 0; i < n; i++) {
        cin >> t;
        a -= t;
    }

    cout << min(n - a, a) << endl;
}
