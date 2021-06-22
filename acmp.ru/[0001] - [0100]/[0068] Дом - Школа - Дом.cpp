#include <iostream>
#include <cstring>
using namespace std;


int main() {
    string s;
    int x;
    
    cin >> s >> x;

    if (s == "Home" or x % 2 != 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}