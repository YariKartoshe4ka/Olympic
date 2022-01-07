#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


const int N = 10010010;
vector<int> pi(N, 0);


void pi_funciton(string &s) {
    int n = (int)s.length();

    for (int i = 1; i < n; ++i) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if (s[i] == s[j]) ++j;
        pi[i] = j;
    }
}


int main() {
    string s;
    cin >> s;
    int n = (int)s.length();

    pi_funciton(s);

    cout << n - pi[n - 1] << endl;

    return 0;
}