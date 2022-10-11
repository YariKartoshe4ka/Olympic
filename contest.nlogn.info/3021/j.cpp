#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main() {
    int n;
    cin >> n;

    vector<int> w(n), h(n + 2);
    h[0] = -1e9;
    h[n + 1] = -1e9;

    for (int i = 0; i < n; ++i)
        cin >> w[i] >> h[i + 1];

    vector<ll> p(n + 1);
    for (int i = 1; i <= n; ++i)
        p[i] = p[i - 1] + w[i - 1];

    vector<int> l(n), r(n);

    stack<int> st;
    st.push(0);

    for (int i = 1; i <= n; ++i) {
        while (h[st.top()] >= h[i])
            st.pop();

        l[i - 1] = st.top();
        st.push(i);
    }

    st.pop();
    st.push(n + 1);
    for (int i = n; i >= 1; --i) {
        while (h[st.top()] >= h[i])
            st.pop();

        r[i - 1] = st.top();
        st.push(i);
    }

    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        ll t = (p[r[i - 1] - 1] - p[l[i - 1]]) * h[i];
        if (t > ans)
            ans = t;
    }

    cout << ans << endl;

    return 0;
}
