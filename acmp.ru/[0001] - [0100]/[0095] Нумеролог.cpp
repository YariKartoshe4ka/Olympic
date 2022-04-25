#include <iostream>
#include <cstring>
using namespace std;

void count(string &n) {
    int cnt = 0;

    for (char c : n)
        cnt += c - '0';

    n = to_string(cnt);
}

int main() {
    string n;
    getline(cin, n);

    int cnt = 0;
    while (n.length() > 1) {
        count(n);
        cnt++;
    }

    cout << n << ' ' << cnt << endl;

    return 0;
}
