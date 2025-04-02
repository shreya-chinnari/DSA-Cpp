// prime

#include <iostream>
using namespace std;

int main() {
   int n;

   cout << "Enter n: " << endl;
   cin >> n;

   int i = 1;
   while (i < n) { // i <= n : 7%7 = 0 !!
      if (n % i == 0) {
         cout << i << " Not Prime" << endl;
      } else {
         cout << i << " Prime" << endl;
      }
      i = i+1;
   }
}