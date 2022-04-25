#include <iostream>
#include <cstring>
using namespace std;


string lead(string a, int n = 6) {
    while (a.length() < n)
        a = "0" + a;
    return a;
}

int main() {
    int k, i, l1, r1, l2, r2;
    string a, a1, a2;

    cin >> k;

    for (i = 0; i < k; i++) {
        cin >> a;

        a1 = lead(to_string(stoi(a) + 1));
        a2 = lead(to_string(stoi(a) - 1));

        l1 = int(a1[0]) + int(a1[1]) + int(a1[2]);
        r1 = int(a1[3]) + int(a1[4]) + int(a1[5]);

        l2 = int(a2[0]) + int(a2[1]) + int(a2[2]);
        r2 = int(a2[3]) + int(a2[4]) + int(a2[5]);

        cout << (l1 == r1 || l2 == r2 ? "Yes" : "No") << endl;
    }

    return 0;
}
