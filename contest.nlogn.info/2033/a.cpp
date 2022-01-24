#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main() {
    int k, p;
    cin >> k >> p;

    int s = 0;

    for (int i = 1; i <= k; ++i) {
        long long d = 1;
        while (d <= i) d *= 10;

        string str = to_string(i);
        reverse(str.begin(), str.end());

        s = (s + i * d + stoi(str)) % p;
    }

    cout << s << endl;

    return 0;
}