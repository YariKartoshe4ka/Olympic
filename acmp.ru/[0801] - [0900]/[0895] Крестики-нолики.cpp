#include <iostream>
#include <cstring>
using namespace std;


bool match(string a, string b, string c, string p) {
    if (a == p || b == p || c == p)
        return true;

    for (int i = 0; i <= 2; i++)
        if (a[i] == b[i] && b[i] == c[i] && c[i] == p[0])
            return true;

    if (a[0] == b[1] && b[1] == c[2] && c[2] == p[0] || a[2] == b[1] && b[1] == c[0] && c[0] == p[0])
        return true;
    return false;
}

int main() {
    string a, b, c;
    cin >> a >> b >> c;


    if (match(a, b, c, "XXX"))
        cout << "Win" << endl;
    else if (match(a, b, c, "OOO"))
        cout << "Lose" << endl;
    else
        cout << "Draw" << endl;

    return 0;
}
