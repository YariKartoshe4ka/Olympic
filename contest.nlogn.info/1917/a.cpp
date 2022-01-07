#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


#define INF 1000000001


int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<int> d(n + 1, INF);
    d[0] = -INF;
     
    for (int i = 0; i < n; i++) {
        int j = int (upper_bound (d.begin(), d.end(), a[i]) - d.begin());
        if (2 * d[j - 1] >= a[i] && a[i] > d[j])
            d[j] = a[i];
    }

    for (auto i : d)
        cout << i << ' ';
    cout << endl;

    int ans = 0, t = 0;
    bool f = false;
    for (auto i : d) {
        if (i != INF && i != -INF)
            f = true;
        else {
            f = false;
            ans = max(ans, t);
            t = 0;
        }

        if (f)
            t += 1;
    }

    cout << ans << endl;

    return 0;
}
