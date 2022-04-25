#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int cnt = 0;

    if (s.length() > 4)
        for (int i = 0; i < s.length() - 4; i++)
            if (s.substr(i, 5) == "<--<<" || s.substr(i, 5) == ">>-->")
                cnt++;

    cout << cnt << endl;

    return 0;
}
