#include <iostream>
#include <vector>
#include <cstring>
using namespace std;


void pi_funciton(string s, int l) {
    int n = (int)s.length();
    vector<int> pi(n, 0);
    vector<int> ans;

    for (int i = 1; i < n; ++i) {
        int j = pi[i - 1];

        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];

        if (s[i] == s[j])
            ++j;
        pi[i] = j;

        if (pi[i] == l)
            ans.push_back(i - 2 * l);
    }

    cout << ans.size() << endl;
    for (int i = 0; i < (int)ans.size(); i++)
        cout << ans[i] << ' ';
}


int main() {
    string a, b;
    cin >> a >> b;

    pi_funciton(b + '#' + a, (int)b.length());

    return 0;
}
