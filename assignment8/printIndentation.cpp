#include <iostream>
using namespace std;

void    printIndentation(string s, int n) {
    
    for (int i = 1; i <= n; i++) {
        cout <<" " ;
    }
    cout <<s <<endl ;
}

int main() {
    
    printIndentation("Hewo", 10) ;
    printIndentation("Hewo", 0) ;
    printIndentation("Hewo", -10);
    
    return 0 ;
}
