// without swap()

// swap alternatives

#include <iostream>
using namespace std;

void swap_alternates(int arr[], int size)
{

   for (int i = 0; i < size; i = i + 2)
   {
      if (i + 1 < size)
      {
         swap(arr[i], arr[i + 1]);
      }
   }
}

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
   int even_arr[6] = {1, 2, 3, 4, 5, 6};
   int odd_arr[5] = {1, 2, 3, 4, 5};

   swap_alternates(even_arr, 6);
   swap_alternates(odd_arr, 5);

   printArray(even_arr, 6);
   printArray(odd_arr, 5);

   return 0;
}