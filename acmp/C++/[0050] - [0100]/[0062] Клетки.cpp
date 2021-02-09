#include <iostream>
#include <cstring>
using namespace std;

int s(char symbol) {
    switch (symbol) {
        case 'A': return 1;
        case 'B': return 2;
        case 'C': return 3;
        case 'D': return 4;
        case 'E': return 5;
        case 'F': return 6;
        case 'G': return 7;
        case 'H': return 8;
    }
}


int main() {
    string c;
    int n;

    cin >> c;
    n = s(c[0]);

    if ((n % 2 == 0 && int(c[1]) % 2 == 0) || (n % 2 != 0 && int(c[1]) % 2 != 0)) {
        cout << "BLACK" << endl;
    } else {
        cout << "WHITE" << endl;
    }


    return 0;
}