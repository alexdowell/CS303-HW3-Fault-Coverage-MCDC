#ifndef PALINDROME_H_
#define PALINDROME_H_


using namespace std;

/*Palindrome function to check if a word is a Palindrome*/
bool palindrome(string test){
    if (test.length() <= 1)

    {
        return true;
    }

    if (test[0] == test[test.length() - 1])
    {
        return palindrome(test.substr(1, test.length() - 2));
    }
    return false;
}
;

#endif