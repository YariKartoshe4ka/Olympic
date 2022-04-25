#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string n;
    bool m;

    cin >> n >> m;

    if (m)
        cout << n.substr(0, n.length() - 1) << n.back() - '/' << endl;
    else
        cout << "NO" << endl;

    return 0;
}
