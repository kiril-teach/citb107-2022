#include <iostream>
#include <climits>

using namespace std;

int main() {
    int s = INT_MAX;
    int n;
    while (cin >> n) {
        if (n < s) s = n;
    }
    if (!cin.eof()) {
        cout << "Failed to read the input." << endl;
        return 1;
    }
    cout << s << endl;
    return 0;
}