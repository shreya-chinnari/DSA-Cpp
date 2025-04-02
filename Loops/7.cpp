#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp, convertedTemp;

    while (true) { // Infinite loop until user exits
        cout << "\nTemperature Conversion Menu:\n";
        cout << "1. Fahrenheit to Celsius\n";
        cout << "2. Celsius to Fahrenheit\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            convertedTemp = (temp - 32) * 5 / 9;
            cout << "Temperature in Celsius: " << convertedTemp << "°C\n";
        } 
        else if (choice == 2) {
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            convertedTemp = (temp * 9 / 5) + 32;
            cout << "Temperature in Fahrenheit: " << convertedTemp << "°F\n";
        } 
        else if (choice == 3) {
            cout << "Exiting program. Goodbye!\n";
            break;  // Exit the loop
        } 
        else {
            cout << "Invalid choice! Please enter 1, 2, or 3.\n";
        }
    }

    return 0;
}
