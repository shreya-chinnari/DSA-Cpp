#include <iostream>

int main() {
   int arr[5] ; // declaration
   std::cout << arr << std::endl;

   int arr_new[5] = {1,2,3,4,5}; // initialise
   std::cout << arr_new[2] << std::endl; // indexing


   int arr_short[10] = {3,3,3};
   std::cout<< "printing the array: " <<std::endl;
   std::cout << arr_short[7] << std::endl;

   int b[10] = {8,3,3};
   int n = 10;
   std::cout<< "printing the array: " <<std::endl;
   for(int i=0; i<n; i++) {
      std::cout << b[i] << " ";
   } // 0 will populate


   int c[10] = {0};
   

   return 0;

}

// 0x61fef4
// 3
// 0
// printing the array: 
// 8 3 3 0 0 0 0 0 0 0 

