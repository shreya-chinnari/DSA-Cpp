#include <iostream>
using namespace std;

int main()
{
    int amt;
    cout << "Enter amount " << endl;
    cin >> amt;
    int n100 = 0, n50 = 0, n20 = 0, n1 = 0;

    switch (1)
    {
    case 1:
        n100 = amt / 100; // e.g., 786 / 100 = 7
        amt = amt % 100;  // amt = 786 % 100 = 86

        cout << "100 Rs Notes: " << n100 << endl;

    case 2:
        n50 = amt / 50;
        amt = amt % 50;
        cout << "50 Rs Notes: " << n50 << endl;

    case 3:
        n20 = amt / 20;
        amt = amt % 20;
        cout << "20 Rs Notes: " << n20 << endl;

    case 4:
        n1 = amt / 1;
        amt = amt % 1;
        cout << "1 Re Notes: " << n1 << endl;
    }

    return 0;
}