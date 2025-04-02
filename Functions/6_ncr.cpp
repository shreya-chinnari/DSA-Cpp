#include <iostream>
using namespace std;

int factorial(int n)
{
   int fact = 1;

   for (int i = 1; i <= n; i++)
   {
      fact = fact * i;
   }
   return fact;
}

int nCr(int n, int r)
{

   // cout << "Enter 2 numbers: " << endl;
   // cin >> n;
   // cin >> r;
   // It takes parameters n and r but reassigns them using cin, which makes the function behave unexpectedly.

   int num = factorial(n);
   int denom = factorial(r) * factorial(n - r);

   int ans = num / denom;

   return ans;
}

int main()
{
   int n, r;
   cout << "Enter two numbers (n r): ";
   cin >> n >> r;

   if (n < r)
   {
      cout << "Invalid input: n must be greater than or equal to r." << endl;
      return 1; // Exit with error
   }

   cout << "Result: " << nCr(n, r) << endl;
   return 0;
}