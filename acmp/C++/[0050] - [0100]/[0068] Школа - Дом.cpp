#include <iostream>
using namespace std;


int main() {
    char m[6];
    int x;
    
    cin >> m >> x;

    if (x % 2 == 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}
