#include <iostream>
using namespace std;

int main() {
    int n, k, i;
    cin >> n;

    int a[n];
    long int s = 0;

    for (i = 0; i < n; i++)
        cin >> a[i];

    cin >> k;

    for (i = 0; i < n; i++)
        s += min(a[i], k);

    cout << s << endl;

    return 0;
}