#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, m, min = 100, cnt;
    cin >> n >> m;

    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;

        cnt = 0;
        for (char c: s)
            if (c == '.')
                cnt++;

        if (cnt < min)
            min = cnt;
    }

    cout << min << endl;

    return 0;
}
