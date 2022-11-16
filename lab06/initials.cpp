#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string fname, lname;
    cin >> fname >> lname;
    if (cin.fail()) {
        cout << "Failed to read the input." << endl;
        return 1;
    }

    cout << (char)toupper(fname.at(0)) << (char)toupper(lname.at(0)) << endl;

    return 0;
}