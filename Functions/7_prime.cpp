#include <iostream>
using namespace std;

bool isPrime(int n)
{
   // 1 - prime
   // 0 - not prime

   for (int i = 2; i < n; i++)
   {
      if (n % i == 0) // it is divisible by i
         return 0;    // not prime
   }
   return 1; // prime
}

int main()
{

   // cin >> int n; - - wrong
   cout << "Enter number" << endl;
   int n;
   cin >> n;
   if (isPrime(n))
   {
      cout << "Prime" << endl;
   }
   else
   {
      cout << "Not prime" << endl;
   }

   return 0;
}