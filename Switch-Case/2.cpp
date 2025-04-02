// continue

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (1-3): ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "You selected One.\n";
            continue;  // ❌ ERROR: continue is not allowed in switch
        case 2:
            cout << "You selected Two.\n";
            break;
        case 3:
            cout << "You selected Three.\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
// error: continue statement not within a loop
// continue;  
// â?O ERROR: continue is not allowed in switch