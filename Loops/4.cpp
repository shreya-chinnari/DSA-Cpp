// upper lower case

#include <iostream>

using namespace std;

int main() {
   char ch;

   cout << "Enter a character" << endl;
   cin >> ch;

   if(ch >= 'A' && ch <= 'Z') {
      cout << "The character is in upper case" << endl;
   } else if (ch >= 'a' && ch <= 'b') {
      cout << "The character is in lower case" << endl;
   } else if (ch >= '0' && ch <= '9') {
      cout << "The character is a digit" << endl;
   } else {
      cout << "The character is a special character" << endl;
   }

   return 0;
}