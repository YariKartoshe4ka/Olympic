#include <iostream>
using namespace std;


int main() {
    char s[5];
    cin >> s;

    int op = (s[1] == '+') - (s[1] == '-');

    if (s[0] == 'x')
        cout << s[4] - '0' - (s[2] - '0') * op;

    else if (s[2] == 'x')
        cout << (s[4] - s[0]) * op;

    else
        cout << s[0] - '0' + (s[2] - '0') * op;

    return 0;
}
