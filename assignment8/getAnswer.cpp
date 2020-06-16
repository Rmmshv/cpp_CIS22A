#include <iostream>
using namespace std;

bool getAnswer() {
    char ch ;
    bool res ;
    // keep asking for new input untill valid char is entered
    for (int i = 0; i <= 100; i++) {
        cout <<"Please enter the char: " ;
        cin >> ch ;
        if (ch == 'Y' || ch == 'y' || ch == 'N' || ch == 'n')
            break ;
    }
    if (ch == 'Y' || ch == 'y') {
        res = true ;
            }
    if (ch == 'N' || ch == 'n') {
        res = false ;
        
    }
    return res;
}

int main() {
    cout <<getAnswer() <<endl ;
    return 0 ;
}
