#include <iostream>
using namespace std;

int main()
{
   // 1---------------------------------------------------------
   int arr[10]; 

   for (int i = 0; i < 10; i++)
   {
      arr[i] = 5;
   }
   for (int i = 0; i < 10; i++)
   {
      cout << arr[i] << " ";
   } // 5 5 5 5 5 5 5 5 5 5
   cout << endl;

   // 2 ----------------------------------------------------------------------------
   int arr1[4] = {0};
   cout << arr1 << endl; // - 0xb039ffe40 - It prints the memory address of the array, not the elements inside it.

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
   } // 7 0 0 0 0 5 5 5 5 5
   cout << endl;

   // 5 ---------------------------------------------------------
   int arr3[10] = {1, 2, 3, 4};
   for (int i = 0; i < 10; i++)
   {
      cout << arr3[i] << " ";
   } // 1 2 3 4 0 0 0 0 0 0
   cout << endl;

   return 0;
}
