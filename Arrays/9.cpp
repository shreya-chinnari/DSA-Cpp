// array - size N, where N=2m+1
// in array, 'm' numbers are repeated twice while '1' number is unique
// find and return the unique number

#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
   int result = 0;

   for (int i = 0; i < size; i++)
   {
      result = result ^ arr[i]; // XOR
   }
   cout << "Unique element : " << result << endl;
   return result;
}

int main()
{

   int arr[] = {1, 2, 1, 2, 5};

   unique(arr, 5);

   return 0;
}