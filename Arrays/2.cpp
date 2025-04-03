// using functions

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}

int main()
{
   // 1---------------------------------------------------------
   int arr[10];

   for (int i = 0; i < 10; i++)
   {
      arr[i] = 5;
   }
   printArray(arr, 10);

   // 2 ----------------------------------------------------------------------------
   int arr1[4] = {0};
   cout << arr1 << endl;

   // 3 ---------------------------------------------------------------------------
   printArray(arr1, 10);
   cout << endl;

   // 4 ---------------------------------------------------------------------------------
   int arr2[] = {7};
   printArray(arr2, 5);

   // 5 ---------------------------------------------------------
   int arr3[10] = {1, 2, 3, 4};
   printArray(arr3, 10);

   return 0;
}
