// initialise an array with same element 

#include <iostream>
using namespace std;

int main() {
   // method 1 - loop
      int a[5];

      for(int i = 0; i<5; i++) {
         a[i] = 1;

      }
      std::cout << "\n array a: \n";
      for(int i = 0; i<5; i++) {
         
         std::cout << a[i] << " ";
         
      } 

   // method 2 - fill() from <algorithm>

      int b[5];

      std::fill(b, b+5, 1);

      std::cout << "\n array b: \n";
      for(int i=0; i<5; i++) {
         
         std::cout << b[i]  << " ";
      }
   
   // method 3 -

      int c[5] = {0};
      int n=5;

      std::cout<< "\n array c: \n";
      for(int i = 0; i<n; i++) {
         cout << c[i] << " ";
      }
   
   // method 3 -

      int d[5] = {9};
   
      std::cout<< "\n array d: \n";
      for(int i = 0; i<n; i++) {
         cout << d[i] << " ";
      }

}


//  array a: 
// 1 1 1 1 1 
//  array b: 
// 1 1 1 1 1 
//  array c: 
// 0 0 0 0 0 
//  array d: 
// 9 0 0 0 0 