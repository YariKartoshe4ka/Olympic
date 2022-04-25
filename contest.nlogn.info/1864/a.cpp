#include <iostream>
#include <vector>
#include <cstring>
using namespace std;


void z_function(string &s) {
    int n = (int)s.length();
    vector<int> z(n, 0);

    cout << "0 ";

    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
        cout << z[i] << ' ';
    }
    cout << endl;
}


void pi_funciton(string &s) {
    int n = (int)s.length();
    vector<int> pi(n, 0);

    cout << "0 ";

    for (int i = 1; i < n; ++i) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if (s[i] == s[j]) ++j;
        pi[i] = j;
        cout << pi[i] << ' ';
    }
    cout << endl;
}


int main() {
    string s;
    cin >> s;

    z_function(s);
    pi_funciton(s);

    return 0;
}
