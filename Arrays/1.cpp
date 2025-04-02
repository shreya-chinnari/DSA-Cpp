#include <iostream>
using namespace std;

int main()
{
   // 1---------------------------------------------------------
   int arr[10]; // Declare an array of size 10

   // Initialize all elements using a loop
   for (int i = 0; i < 10; i++)
   {
      arr[i] = 5;
   }

   // Print the array
   for (int i = 0; i < 10; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;

   // 2 ----------------------------------------------------------------------------
   int arr1[4] = {0};
   cout << arr1 << endl; //  It prints the memory address of the array, not the elements inside it. - 0xb039ffe40
                         // Print each element correctly
   // 3 ---------------------------------------------------------------------------
   for (int i = 0; i < 10; i++)
   {
      cout << arr1[i] << " ";

   } // 0 0 0 0 5 5 5 5 5 5
   // C++ does not automatically erase or reset memory when you declare a new variable. If you don't explicitly initialize an array, it may contain whatever data was in that memory location before.
   cout << endl;

   // 4 ---------------------------------------------------------------------------------
   int arr2[] = {7};
   for (int i = 0; i < 10; i++)
   {
      cout << arr2[i] << " ";
   }
   cout << endl;
   return 0;
}
