#include <iostream>
using namespace std;

int main() {
    int amt;
    cout << "Enter amount: ";
    cin >> amt;

    int n100, n50, n20, n1;

    // Count 100 Rs Notes
    n100 = amt / 100;
    amt %= 100;
    cout << "100 Rs Notes: " << n100 << endl;

    // Count 50 Rs Notes
    n50 = amt / 50;
    amt %= 50;
    cout << "50 Rs Notes: " << n50 << endl;

    // Count 20 Rs Notes
    n20 = amt / 20;
    amt %= 20;
    cout << "20 Rs Notes: " << n20 << endl;

    // Count 1 Rs Notes
    n1 = amt / 1;
    cout << "1 Re Notes: " << n1 << endl;

    return 0;
}
