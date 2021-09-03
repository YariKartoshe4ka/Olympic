#include <iostream>
using namespace std;

int main() {
    int n, v, k, sub;
    long long int cnt = 0;
    bool flag = false;

    cin >> n >> v >> k;

    for (int i = 0; i < n; i++) {
        sub = v - k * i;

        if (sub > 0)
            cnt += sub;
        else
            flag = true;
    }

    cout << (flag ? "NO" : "YES") << ' ' << cnt << endl;

    return 0;
}