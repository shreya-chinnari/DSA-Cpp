// sum of elements in arr

#include <iostream>
using namespace std;

int Sum(int arr[], int n)
{
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
      sum = sum + arr[i];
   }
   return sum;
}

int main()
{
   int n;
   cout << " Enter array size : " << endl;
   cin >> n;

   int arr[100];

   cout << " Enter array elements : " << endl;
   for (int i = 0; i < n; i++)
   {
      cout << "Enter element " << i + 1 << ": " << endl;
      cin >> arr[i];
   }
   cout << " Your array : " << endl;
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
      }
   cout << endl;

   cout << "Sum of array is : " << Sum(arr, n);

   return 0;
}