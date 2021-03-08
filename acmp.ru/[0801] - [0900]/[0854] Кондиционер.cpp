#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t1, t2;
    string mode;

    cin >> t1 >> t2 >> mode;

    if (mode == "freeze")
        cout << min(t1, t2) << endl;
    else if(mode == "heat")
        cout << max(t1, t2) << endl;
    else if(mode == "auto")
        cout << t2 << endl;
    else
        cout << t1 << endl;

    return 0;
}