#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, cnt = 0;
    string s;

    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> s;

        if (s[0] == s[3])
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}