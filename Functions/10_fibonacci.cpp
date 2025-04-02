#include <iostream>
using namespace std;

void fibonacci(int n)
{
   int a = 0;
   int b = 1;
   int next;

   cout << "Fibonacci Series: " << endl;

   for (int i = 0; i < n; i++)
   {
      cout << a << " "; // Print the current Fibonacci number

      next = a + b; // Compute next Fibonacci number
      a = b;        // Move `a` forward (a takes the value of b)
      b = next;     // Move `b` forward (b takes the value of next)
   }
   cout << endl;
}

int main()
{
   int n;
   cout << "Enter the number of terms: ";
   cin >> n;

   fibonacci(n);
   return 0;
}

// a is the first term(0).
// b is the second term(1)
// next stores the next Fibonacci number.

// Loop runs n times.
// Prints a(starting from 0).

// a → stores the current Fibonacci number.
// b → stores the next Fibonacci number.
// next → temporarily stores the new Fibonacci number(sum of a and b).

// Shift values : a = b, b = next

// F(0) = 0
// F(1) = 1
// F(2) = F(1) + F(0) = 1 + 0 = 1
// F(3) = F(2) + F(1) = 1 + 1 = 2
// F(4) = F(3) + F(2) = 2 + 1 = 3