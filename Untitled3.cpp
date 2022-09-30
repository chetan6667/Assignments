#include <iostream>
using namespace std;

int main()
{
     int n, number, d, rev = 0;

     cout << "Enter a positive number: ";
     cin >> number;

     n = number;

     do
     {
         d = number % 10;
         rev = (rev * 10) + d;
         number = number / 10;
     } while (number != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}
