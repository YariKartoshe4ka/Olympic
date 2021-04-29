#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int maxf = 0, minf = 0, cnt = 0;
    string s;
    getline(cin, s);


    for (char c: s) {
        if (c == '2')
            cnt--;
        else
            cnt++;

        if (cnt > maxf)
            maxf = cnt;
        if (cnt < minf)
            minf = cnt;
    }

    cout << abs(minf) + maxf + 1 << endl;

    return 0;
}