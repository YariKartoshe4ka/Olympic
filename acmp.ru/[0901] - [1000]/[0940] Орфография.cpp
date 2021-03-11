#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int k, i;
    cin >> k;

    string s;
    cin >> s;

    for (i = 0; i < s.length(); i++)
        if (i + 1 == k)
            continue;
        else
            cout << s[i];

    return 0;
}