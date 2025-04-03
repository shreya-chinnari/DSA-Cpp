#include <iostream>
using namespace std;

// Function to get array input
void getArray(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << "Enter element " << i + 1 << ": ";
      cin >> arr[i];
   }
}

// Function to print the array
void printArray(int arr[], int n)
{
   cout << "Array elements: ";
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}

// Function to reverse the array
void reverseArray(int arr[], int n)
{
   int start = 0, end = n - 1;

   while (start < end)
   { // ✅ Fix: Use `start < end`
      swap(arr[start], arr[end]);
      start++;
      end--;
   }
}

int main()
{
   int n;
   cout << "Enter number of elements: ";
   cin >> n;

   int arr[n]; // ✅ Fix: Declare `arr[]` after `n` is initialized

   getArray(arr, n); // ✅ Fix: Don't reassign `n` inside `getArray()`

   cout << "Original ";
   printArray(arr, n);

   reverseArray(arr, n);

   cout << "Reversed ";
   printArray(arr, n);

   return 0;
}
