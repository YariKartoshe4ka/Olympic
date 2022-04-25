#include <iostream>
#include <cstring>
using namespace std;


int main() {
    string e = "2.71828182845904523536028750";

    short int n;
    cin >> n;

    if (n == 0)
        cout << 3 << endl;

    else {
        string s = e.substr(0, n + 3);

        if ((s.back() - '0') >= 5) {
            s = s.substr(0, n + 2);
            s = s.substr(0, n + 1) + to_string(s.back() - '0' + 1);
        } else {
            s = s.substr(0, n + 2);
        }

        cout << s << endl;
    }

    return 0;
}
