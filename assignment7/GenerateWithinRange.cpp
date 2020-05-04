#include <iostream>
#include <cstdlib>
using namespace std ;

int main() {

    int randomNum, lowerLim, upperLim, numTotal ;
    
    cout <<"Welcome.\nPlease enter how many random numbers you want to generate: " ;
    cin >> numTotal ;
    while (numTotal <= 0) {
        cout <<"Number cannot be negative or zero. Please try again.\n" ;
        cout <<"Please enter how many numbers you want to generate: " ;
        cin >> numTotal ;
    }
    
    cout <<"Please enter the lower limit: " ;
    cin >> lowerLim;
    while (lowerLim < 0) {
        cout <<"Number cannot be negative. Please try again.\n" ;
        cout <<"Please enter the lower limit: " ;
        cin >> lowerLim ;
    }
    
    cout <<"Please enter the upper limit: " ;
    cin >> upperLim ;
    
    while (upperLim <= 0) {
        cout <<"Number cannot be nagative or zero. Please try again.\n" ;
        cout <<"Please enter the upper limit: " ;
        cin >> upperLim ;
    }
    
    for (int i = 0; i < numTotal; i++) {
        randomNum = rand() % (upperLim - lowerLim + 1) + lowerLim ;
        cout <<"Random number: " <<randomNum <<endl ;
    }
    
    cout <<"\nThank you for using my program 🖖.\n" ;
    return 0;
}
