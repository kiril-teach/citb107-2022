#include <iostream>

using namespace std;

int main() {
    int total, paid;
    
    cin >> total >> paid;

    int change = paid - total;
    if (change < 0) {
        cout << "The total exceeds the amount paid." << endl;
        return 1;
    }

    int left = change;

    int count2lv = left / 200;
    if (count2lv > 0) {
        cout << count2lv << "x " << 2.00 << " lv." << endl;
        left = left % 200;
    }
    
    int count1lv = left / 100;
    if (count1lv > 0) {
        cout << count1lv << "x " << 1.00 << " lv." << endl;
        left = left % 100;
    }

    int count50st = left / 50;
    if (count50st > 0) {
        cout << count50st << "x " << 50 << " st." << endl;
        left = left % 50;
    }

    int count20st = left / 20;
    if (count20st > 0) {
        cout << count20st << "x " << 20 << " st." << endl;
        left = left % 20;
    }

    int count10st = left / 10;
    if (count10st > 0) {
        cout << count10st << "x " << 10 << " st." << endl;
        left = left % 10;
    }

    int count5st = left / 5;
    if (count5st > 0) {
        cout << count5st << "x " << 5 << " st." << endl;
        left = left % 5;
    }

     int count2st = left / 2;
    if (count2st > 0) {
        cout << count2st << "x " << 2 << " st." << endl;
        left = left % 2;
    }

    if (left) cout << left << "x " << 1 << "st." << endl;

    return 0;
}