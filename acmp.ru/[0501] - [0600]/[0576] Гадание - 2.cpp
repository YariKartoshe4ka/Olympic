#include <iostream>
using namespace std;


int gcd(int a, int b) {
    while (a != 0 && b != 0) {
        if (a < b)
            swap(a, b);
        a %= b;
    }
    return a + b;
}


int main() {
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i < n; ++i)
        ans += gcd(n, i) == 1;

    cout << ans << endl;

    return 0;
}
