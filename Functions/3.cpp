// shorter

#include <iostream>
using namespace std;

int power()
{
   int p, q;
   int res = 1;

   cout << "Enter the base number: ";
   cin >> p;

   cout << "Enter the power: ";
   cin >> q;

   for (int i = 0; i < q; i++)
   {
      res = res * p;
   }
   return res;
}

int main()
{

   cout << "The result is: " << power() << endl;

   return 0;
}