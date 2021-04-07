#include <iostream>
#include <cstring>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 0;

    string s;
    getline(cin, s);

    for (char c: s) {
        if (c == '0')
            cnt++;
        else {
            cout << char(cnt + 97);
            cnt = 0;
        }
    }

    return 0;
}