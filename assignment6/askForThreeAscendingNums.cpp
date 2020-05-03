#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout <<"Welcome. Please enter 3 numbers in aschending order." <<endl ;
    cout <<"\nPlease enter 1st number: " ;
    cin >> num1;

    cout <<"Please enter 2nd number: ";
    cin >> num2;
    while (num2 <= num1){
        cout <<"This number is smaller than or equal to the first number. Please try again.\n";
        cout <<"Please enter 2nd number: " ;
        cin >> num2;
    }
    cout <<"Please enter 3d number: ";
    cin >> num3;
    while (num3 <= num2){
        cout <<"This number is smaller than or equal to the second number. Please try again.\n";
        cout <<"Please enter 3d number: " ;
        cin >> num3;
    }
    cout <<endl;
    cout <<"The 3 ascending numbers are: " <<num1 <<" - " <<num2 <<" - " <<num3 <<endl ;
    cout <<"Thank you for using my program. Live long and prosper.\n\n" ;

    return 0;
}
