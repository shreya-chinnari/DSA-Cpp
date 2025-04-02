#include <iostream>
using namespace std;

int power(int p, int q)
{
   int res = 1;
   for (int i = 0; i < q; i++)
   {
      res = res * p;
   }
   return res; // important, this is what will return when function power(p,q) is called
}

int main()
{

   int p, q;
   cout << "Enter the base number: ";
   cin >> p;

   cout << "Enter the power: ";
   cin >> q;

   cout << "The result is: " << power(p, q) << endl;

   return 0;
}