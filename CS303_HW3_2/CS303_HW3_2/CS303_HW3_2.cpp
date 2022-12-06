#include<iostream>
#include"Palindrome.h"
using namespace std;


int main()
{
    
    /*testing to see if racecar is a palindrome*/
    if ( palindrome("racecar") == true )
    {
        cout << "racecar" << " is palindrome" << endl;
    }
    else
    {
        cout << "racecar" << " is not a palindrome" << endl;
    }
    /*testing to see if program is a palindrome*/
    if ( palindrome("program") == true )
    {
        cout << "program" << " is palindrome" << endl;
    }
    else
    {
        cout << "program" << " is not a palindrome" << endl;
    }
}
