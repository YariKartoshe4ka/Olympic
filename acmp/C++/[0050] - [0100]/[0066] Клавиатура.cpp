#include <iostream>
#include <cstring>
using namespace std;


int main() {
    string keyboard = "qwertyuiopasdfghjklzxcvbnmq";
    char n;
    cin >> n;

    char c = keyboard[keyboard.find(n) + 1];
    cout << c << endl;

    return 0;
}
