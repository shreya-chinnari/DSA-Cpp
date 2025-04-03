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
   int arr[10];

   for (int i = 0; i < 10; i++)
   {
      arr[i] = 5;
   }
   printArray(arr, 10);

   cout << sizeof(arr) << endl;               // 40
   cout << sizeof(int) << endl;               // 4
   cout << sizeof(arr) / sizeof(int) << endl; // 10 - length

   // new

   int arr1[] = {2, 3, 4};

   printArray(arr1, 10);

   cout << sizeof(arr1) << endl;       // 12
   cout << sizeof(int) << endl;        // 4
   cout << sizeof(arr1) / sizeof(int); // 3 - length

   // hence, size and length are not same
}