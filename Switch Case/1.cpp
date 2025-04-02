// to get out of infinite loop : while{ switch {} }

#include <iostream>
using namespace std;

int main()
{
   int choice;

   // method 1: Using break

   while (true)
   {
      cout << "\nMenu:\n";
      cout << "1. Say Hello\n";
      cout << "2. Say Goodbye\n";
      cout << "3. Exit\n";
      cout << "Enter your choice: ";
      cin >> choice;

      switch (choice)
      {
      case 1:
         cout << "Hello!" << endl;
         break; // Goes back to while loop
      case 2:
         cout << "Goodbye!" << endl;
         break;
      case 3:
         cout << "Exiting program..." << endl;
         break; // Breaks out of switch
      }

      if (choice == 3)
      { // Breaks out of while loop
         break;
      }
   }

   cout << "Program exited successfully." << endl;

   // method 2:  Using return

   while (true)
   {
      int choice;
      cout << "1. Continue\n2. Exit\n";
      cin >> choice;

      switch (choice)
      {
      case 1:
         cout << "Continuing..." << endl;
         break;
      case 2:
         cout << "Exiting program..." << endl;
         return 0; // Exits the entire program immediately
      default:
         cout << "Invalid choice! Try again." << endl;
      }
   }

   // method 3: Using exit()
   
    while (true) { // Infinite loop
        cout << "\nMenu:\n";
        cout << "1. Print Hello\n";
        cout << "2. Print Goodbye\n";
        cout << "3. Exit Program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Hello!" << endl;
                break;
            case 2:
                cout << "Goodbye!" << endl;
                break;
            case 3:
                cout << "Exiting program..." << endl;
                exit(0);  // Immediately stops the program
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }

   return 0;
}


