// find sum of all even numbers

#include <iostream>
using namespace std;

int main() {
   int n, sum =0, i=2;

   cout << " Enter n: "  << endl;
   cin >> n;

   while(i<=n) {
      sum = sum + i;
      i = i + 2;
   }
   cout << "\n" << sum;
}