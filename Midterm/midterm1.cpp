// first function from the midterm assignment

#include <iostream>
using namespace std ;

int areFirstTwoTheSameAsLastTwoChars(string s) {
    int len = s.length() ;
    // return false if the string is empy or has only 1 char
    if (len < 2)
        return  0;

    if ((s[0] == s[len-2]) && (s[1] == s[len-1]))
        return 1;

    return 0;
}

int main() {
    
    cout << areFirstTwoTheSameAsLastTwoChars("") <<endl;
    cout << areFirstTwoTheSameAsLastTwoChars("A") <<endl;
    cout << areFirstTwoTheSameAsLastTwoChars("AB") <<endl;
    cout << areFirstTwoTheSameAsLastTwoChars("ABA") <<endl;
    cout << areFirstTwoTheSameAsLastTwoChars("ABAB") <<endl;
    cout << areFirstTwoTheSameAsLastTwoChars("ABBA") <<endl;
    cout << areFirstTwoTheSameAsLastTwoChars("ABCABC") <<endl;
    cout << areFirstTwoTheSameAsLastTwoChars("ABCCAB") <<endl;
    return 0;
}

/*
Write a function named “areFirstTwoTheSameAsLastTwoChars” that accepts
a string. It returns true if the first two characters and the last two characters of the
string are the same. It returns false otherwise. In addition, if the string is empty or
has only one character, it also returns false.
*/
