#include <iostream>
using namespace std;

int concat( const char * ); // prototype
int checkString( const char *);

int main()
{
   char string1[ 80 ];

   cout << "Enter a string: ";
   cin >> string1;
   cout << "First space located at " << concat( string1 ) << endl;
   cout << "Size of string 1: " << checkString( string1 ) << endl;
   
} // end main

// What does this function do?
/*
String concatentation of sorts - it tells you where the first space in the string is located based off index, ergo typing in "hey there" would result in 3 printing out because at index 3 in the string, the first space is located, assuming we're starting from 0
*/
int concat( const char *s ) 
{
   int x;

   for ( x = 0; *s != '\0'; s++ )
      x++;

   return x;
} // end function mystery2

int checkString (const char *s) {
   return sizeof(s);
}
