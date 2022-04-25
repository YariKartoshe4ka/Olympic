#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, s, i = 0;
    cin >> n >> s;

    int a[n];

    for (; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    i = 0;

    while (s >= a[i] && i < n) {
        s -= a[i];
        i++;
    }

    cout << i << endl;

    return 0;
}
