// shortcut
#include <iostream>
using namespace std;

int Min(int arr[], int size)
{
   int minValue = INT_MAX;

   for (int i = 0; i < size; i++)
   {
      // if (arr[i] < min)
      // {
      //    min = arr[i];
      // }

      minValue = min(minValue, arr[i]);
   }
   return minValue;
};

int Max(int arr[], int size)
{
   int maxValue = INT_MIN;

   for (int i = 0; i < size; i++)
   {
      //    if (arr[i] > max)
      //    {
      //       max = arr[i];
      //    }

      maxValue = max(maxValue, arr[i]); // Update maxValue if arr[i] is larger
   }

   return maxValue;
}

// max(a, b) is a built - in function that returns the larger value of a and b.
// min(a, b) is a built - in function that returns the smaller value of a and b.

int main()
{

   int size;
   cout << " Enter array size : " << endl;
   cin >> size;

   int arr[100];

   cout << " Enter array elements : " << endl;
   for (int i = 0; i < size; i++)
   {
      cout << "Enter element " << i + 1 << ": " << endl;
      cin >> arr[i];
   }

   cout << "Max element in the array: " << Max(arr, size) << endl;
   cout << "Min element in the array: " << Min(arr, size) << endl;
   return 0;
}