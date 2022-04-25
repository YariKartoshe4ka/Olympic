#include <iostream>
#include <cstring>
#include <unordered_set>
using namespace std;


string shift(string str, int a) { // Only positive shifts
    char new_str[str.length()] = {0};

    for (int i = 0; i < str.length(); i++)
        new_str[(i + a) % str.length()] = str[i];

    cout << string(new_str) << endl;
    return string(new_str);
}


int main() {
    string a, b;
    cin >> a >> b;
    //char t[b.length()];
    unordered_set<string> s;

    for (int i = 0; i < b.length(); i++) {
        s.insert(shift(b, i));
    }

    for (auto i = s.begin(); i != s.end(); i++) {

    }


    //cout << shift(b, 1) << endl;
    return 0;
}
