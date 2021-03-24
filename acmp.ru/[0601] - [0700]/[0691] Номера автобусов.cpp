#include <iostream>
#include <regex>
#include <cstring>
using namespace std;

int main() {
    short int n, i;
    cin >> n;

    string a;
    regex r("^[A,B,C,E,H,K,M,O,P,T,X,Y][0-9]{3}[A,B,C,E,H,K,M,O,P,T,X,Y]{2}$");

    for (i = 0; i < n; i++) {
        cin >> a;

        cout << (regex_match(a, r) ? "Yes" : "No") << endl;
    }

    return 0;
}