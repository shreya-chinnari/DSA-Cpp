#include <iostream>
using namespace std;

int Min(int arr[], int size)
{
   int min = INT_MAX; // Step 1: Initialize minValue with the largest possible integer

   for (int i = 0; i < size; i++)
   {
      if (arr[i] < min)
      {
         min = arr[i];
      }
   }
   return min;
}

int Max(int arr[], int size)
{
   int max = INT_MIN; // Step 1: Initialize maxValue with the smallest possible integer

   for (int i = 0; i < size; i++)
   {
      if (arr[i] > max)
      {
         max = arr[i];
      }
   }
   return max;
}

int main()
{

   int size;
   cout << " Enter array size : " << endl;
   cin >> size;

   // int arr[];
   int arr[100]; 

   cout << " Enter array elements : " << endl;
   for (int i = 0; i < size; i++)
   {
      // cout << "Enter element" + i + " " << endl;
      cout << "Enter element " << i + 1 << ": " << endl;
      cin >> arr[i];
   }

   // cout << "Max element in the array: " << Max(int arr[], int size) << endl;
   // cout << "Min element in the array: " << Min(int arr[], int size) << endl;
   cout << "Max element in the array: " << Max(arr, size) << endl;
   cout << "Min element in the array: " << Min(arr, size) << endl;
   return 0;
}