// initialise an array with same element 

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
   cout<< "\n printing the array : " << endl;
   for (int i = 0; i < size; i++) {
      cout<< arr[i] << " ";
   }
   cout<< "\n Done " << endl;
}

int main() {
   // method 1 - loop
      int a[5];

      for(int i = 0; i<5; i++) {
         a[i] = 1;

      }
      // std::cout << "\n array a: \n";
      // for(int i = 0; i<5; i++) {
         
      //    std::cout << a[i] << " ";
         
      // } 
      printArray(a, 5);

   // method 2 - fill() from <algorithm>

      int b[5];

      std::fill(b, b+5, 1);

      // std::cout << "\n array b: \n";
      // for(int i=0; i<5; i++) {
         
      //    std::cout << b[i]  << " ";
      // }
      printArray(b, 5);
   
   // method 3 -

      int c[5] = {0};
      int n=5;

      // std::cout<< "\n array c: \n";
      // for(int i = 0; i<n; i++) {
      //    cout << c[i] << " ";
      // }
      printArray(c, 5);
   
   // method 3 -

      int d[5] = {9};
   
      // std::cout<< "\n array d: \n";
      // for(int i = 0; i<n; i++) {
      //    cout << d[i] << " ";
      // }
      printArray(d, 5);

}

//  printing the array : 
// 1 1 1 1 1 
//  printing the array : 
// 1 1 1 1 1 
//  printing the array : 
// 0 0 0 0 0 
//  printing the array : 
// 9 0 0 0 0 