// power, simple

#include <iostream>
using namespace std;

int main()
{
   int a, b, ans = 1; // ans = 1 is important otherwise it takes ans = 0 and 0*anything = 0
   cout << "Enter the first number: " << endl;
   cin >> a;
   cout << "Enter the power: " << endl;
   cin >> b;

   for (int i = 1; i <= b; i++)
   {
      ans = ans * a;
   }
   cout << "Result: " << ans << endl;
   return 0;
}