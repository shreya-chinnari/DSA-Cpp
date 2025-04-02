// total number of setbits in a and b , no. of 1s in binary
#include <iostream>
using namespace std;


int countSetBits(int num)
{
   int count = 0;
   while (num > 0)
   {
      count += (num & 1); // Increment if the last bit is 1
      num >>= 1;          // Right shift
   }
   return count;
}

// What Happens Inside the while Loop ? 

// Extract last bit using [num & 1]
//    If last bit is 1,increment count
//    If last bit is 0,ignore it

// Right shift(num >>= 1)
//    This removes the last bit(shifting all bits right)
//    The process continues until num becomes 0

    int main()
{
   int a, b;
   cout << "Enter two numbers: ";
   cin >> a >> b;

   int totalSetBits = countSetBits(a) + countSetBits(b);
   cout << "Total number of set bits in " << a << " and " << b << " is: " << totalSetBits << endl;

   return 0;
}

// Each number in memory is stored in binary format(0s and 1s).
// The program extracts each bit from the number using bitwise operations.
// eg: num = 5 (Binary: 101)