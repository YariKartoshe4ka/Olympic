#include <iostream>
#include <cstring>
using namespace std;


string s = "";


int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= 10000; ++i)
        s += to_string(i);

    cout << s.find(to_string(n)) + 1 << endl;

    return 0;
}
