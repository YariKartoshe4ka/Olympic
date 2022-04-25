#include <iostream>
#include <vector>
using namespace std;


const int N = 100001;


int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(N, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ++b[a[i]];
    }

    bool f = 1;
    long long ans = 0, even = 0, odd = 0;
    for (int i = 1; i < N; ++i) {
        if (f) {
            ans += max(even, odd);
            even = 0, odd = 0;
            f = 0;
        }

        if (b[i] == 0) f = 1;

        if (i % 2)
            odd += i * b[i];
        else
            even += i * b[i];
    }

    cout << ans << endl;

    return 0;
}
