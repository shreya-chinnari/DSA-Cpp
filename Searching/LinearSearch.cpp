#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{
   for (int i = 0; i < n; i++)
   {
      if (arr[i] == key)
      {
         return true; // return 1;
      }
   }
   return 0;
}

int main()
{

   int arr[4] = {3, 6, 2, 8};

   int key;
   cout << "Enter a key {value you are looking for}: " << endl;
   cin >> key;

   bool found = search(arr, 4, key);

   if (found)
   {
      cout << "element " << key << "  -  found in the array!" << endl;
   }
   else
   {
      cout << "element " << key << "  -  NOT found in the array!" << endl;
   }

   cout << "arr: ";
   for (int i = 0; i < 4; i++)
   {
      cout << arr[i];
   }

   return 0;
}