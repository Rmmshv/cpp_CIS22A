#include <iostream>
#include <string>
using namespace std;

bool    hasOnlyAbc(string s) {
    bool res = true ;
    string str  = s;
    int correctCount = 0;
    for (int i = 0; i <= sizeof(str); i++){
        if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C'
            || str[i] == 'a' || str[i] == 'b' || str[i] == 'c')
            correctCount+=1 ;
       
    }
    // if all chars are valid return true
    if (correctCount == s.length())
        res = true ;
    // return false otherwise
    else
        res = false ;
    return res;
}

int main() {
    string s1 ="ABC", s2 = "ADC", s3 = "XVR", s4 = "ccc" ;
    cout <<hasOnlyAbc(s1) <<endl ;
    cout <<hasOnlyAbc(s2) <<endl ;
    cout <<hasOnlyAbc(s3) <<endl ;
    cout <<hasOnlyAbc(s4) <<endl ;
    
    return 0 ;
}
