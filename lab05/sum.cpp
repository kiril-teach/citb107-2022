#include <iostream>

using namespace std;

int main() {

    int sum = 0;
    int n;
    while (cin >> n) {
        sum += n;
    }
    if (!cin.eof()) {
        cout << "Failed to read the input." << endl;
        return 1;
    }
    cout << sum << endl;
    return 0;
}