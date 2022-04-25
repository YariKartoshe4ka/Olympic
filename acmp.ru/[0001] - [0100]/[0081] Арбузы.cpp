#include <iostream>
using namespace std;

int main() {
    int n, min, max, i, t;
    cin >> n >> t;
    min = t;
    max = t;

    for (i = 1; i < n; i++) {
        cin >> t;

        if (t > max)
            max = t;
        if (t < min)
            min = t;
    }

    cout << min << ' ' << max << endl;

    return 0;
}
