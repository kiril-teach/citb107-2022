#include <iostream>

using namespace std;

int main() {

    int x, y;
    char op;

    while(cin >> x >> op >> y) {
        if (op == '+') {
            cout << x + y << endl;
        } else if (op == '-') {
            cout << x - y << endl;
        } else if (op == '*') {
            cout << x * y << endl;
        } else if (op == '/') {
            if (y == 0) {
                cout << "Cannot divide by zero" << endl;
                return 3;
            }
            cout << x / y << endl;
        } else {
            cout << "Unrecognized operation" << endl;
            return 2;
        }
    }
    if (!cin.eof()) {
        cout << "Failed to read the input." << endl;
        return 1;
    }
    return 0;
}
