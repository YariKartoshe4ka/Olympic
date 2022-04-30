#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    int k = 0, i = 0;
    string s = "";

    while (k < n) {
        ++i;
        s += to_string(i);
        k += s.length();
    }

    cout << s[i - (k - n) - 1] << endl;

    return 0;
}
