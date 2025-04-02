// arithmetic progression

#include <iostream>
using namespace std;

int AP(int n)
{
   // int ap = 3*n+7;
   // return ap;
   return (3 * n + 7);
}

int main()
{
   int n;
   cout << "Enter n for Nth term: " << endl;
   cin >> n;

   // int ap = AP(n);
   // cout << "Nth term is : " << ap << endl;
   cout << "Nth term is : " << AP(n) << endl;
   return 0;
}