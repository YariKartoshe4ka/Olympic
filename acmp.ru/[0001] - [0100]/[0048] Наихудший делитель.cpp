#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int cnt = 0;

    string n;
    cin >> n;

    for (int i = n.length() - 1; i >= 0; i--) {
        if (n[i] == '0')
            cnt++;
        else
            break;
    }

    cout << 1;
    for (int i = 0; i < cnt; i++)
        cout << 0;
    cout << endl;

    return 0;
}
