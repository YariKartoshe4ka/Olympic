#include <iostream>
#include <map>
#include <set>
#include <cstring>
using namespace std;

void solve() {
    string s;
    cin >> s;

    set<char> cs;

    for (char c : s)
        cs.insert(c);

    for (char C : cs) {
        string sub = "";

        for (char x : (s + C)) {
            if (x == C) {
                map<char, int> cnt;

                for (char c : cs)
                    cnt[c] = 0;

                for (char sc : sub)
                    ++cnt[sc];

                int m = -1;
                for (char c : cs)
                    m = max(m, cnt[c]);

                if (m > 1) {
                    cout << "NO\n";
                    return;
                }

                sub = "";
            }
            else
                sub += x;
        }
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
