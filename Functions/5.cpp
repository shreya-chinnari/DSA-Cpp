// using bool

#include <iostream>
using namespace std;

// Function to check even or odd
bool isEven(int num)
{
   if(num & 1) { // Checks if the last bit is 1
     return 0; // odd
   }
   return 1;

}

int main()
{
   int num;
   cout << "Enter a number: ";
   cin >> num;

   if (isEven(num)) // return 1
      cout << num << " is Even." << endl;
   else // return 0
      cout << num << " is Odd." << endl;

   return 0;
}

// Bitwise AND (&) is used to check the least significant bit (LSB) of the number.

// How does it work?

// Even numbers always have 0 as the last bit (e.g., ...010, ...100).

// Odd numbers always have 1 as the last bit (e.g., ...011, ...101).

// num & 1 extracts the last bit :

//     If 1,
//     the number is odd → return false(0).

//     If 0,
//     the number is even → return true(1).
