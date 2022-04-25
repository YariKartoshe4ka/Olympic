#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if (a.length() != b.length()) {
        cout << "No" << endl;
        return 0;
    }

    map<char, int> ac, bc;

    for(char c : a) ac[tolower(c)]++;
    for(char c : b) bc[tolower(c)]++;

    if (ac == bc)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
