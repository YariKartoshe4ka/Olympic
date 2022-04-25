#include <iostream>
#include <string>
using namespace std;

int func(char a) {
    switch (a) {
        case 'A': return 1;
        case 'B': return 2;
        case 'C': return 3;
        case 'D': return 4;
        case 'E': return 5;
        case 'F': return 6;
        case 'G': return 7;
        case 'H': return 8;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        default: return 0;
    }
}

int main() {
    string s;
    cin >> s;
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    x1 = func(s[0]); y1 = func(s[1]);
    x2 = func(s[3]); y2 = func(s[4]);

    if (x1 != 0 && x2 != 0 && s[2] == '-' && y1 < 9 && y2 < 9 && y1 > 0 && y2 > 0) {
        if (x2 - x1 == 1 && y2 - y1 == 2) cout << "YES";
        else if (x2 - x1 == 1 && y1 - y2 == 2) cout << "YES";
        else if (x1 - x2 == 1 && y1 - y2 == 2) cout << "YES";
        else if (x1 - x2 == 1 && y2 - y1 == 2) cout << "YES";
        else if (x2 - x1 == 2 && y2 - y1 == 1) cout << "YES";
        else if (x2 - x1 == 2 && y1 - y2 == 1) cout << "YES";
        else if (x1 - x2 == 2 && y1 - y2 == 1) cout << "YES";
        else if (x1 - x2 == 2 && y2 - y1 == 1) cout << "YES";
        else cout << "NO";
    } else cout << "ERROR";
    return 0;
}
