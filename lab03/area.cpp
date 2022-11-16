#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // read input
    int a, b, c;
    cin >> a >> b >> c;

    // calculate area
    double p = (a + b + c) / 2.0;
    cerr << "p=" << p << endl;

    double area = sqrt(p*(p-a)*(p-b)*(p-c));
    
    cout << area << endl;

    return 0;
}