// while

// 1 to n


#include <iostream>

using namespace std;

int main() {
   int in ;
   cin >> in;

   int i = 1;

   while(i <= in) {
      cout << i << " ";
      i = i+1; // ++

   }

   int sum = 0;
   int j = 0;

   while(j <= in) {
      sum = sum + j ;
      j = j+1;
   }
   cout << "\n" << sum;
}