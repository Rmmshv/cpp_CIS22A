/*
SECOND PART OF THE ASSIGNMENT 12
*/
#include <iostream>
#include <cctype>
using namespace std ;

int    reverseCase(char s[]) {
    int i = 0,j=0, changed = 0;
    char *p = new char;
 
    for (i = 0; i < strlen(s); i++){
        if (islower(s[i])){
        p[j++] =toupper(s[i]) ;
            changed++ ;
        }
        if (isupper(s[i])){
            p[j++] = tolower(s[i]) ;
            changed ++;
        }
        if (!isalpha(s[i]))
            p[j++] = s[i] ;
    }
    
    
    for (int i = 0; i < strlen(s); i++){
        cout <<p[i] ;
    }
    cout <<endl <<"Letters changed: " ;
    return (changed) ;
}

int main() {
// tests
    char greeting[] = " Hello, World! " ;
    char greeting1[] = "HI MOM" ;
    cout <<reverseCase(greeting) <<endl ;
    cout <<reverseCase(greeting1) <<endl ;
       
    return 0;
}
