#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int printInvoice(double w2, double interest, double deduction, double paidTax, double taxAmount, double res) {
    
    cout <<endl;
    cout <<"Income: $" <<fixed<<showpoint<<setprecision(2) <<w2 <<endl;
    cout <<"Interest: $" <<fixed<<showpoint<<setprecision(2) <<interest <<endl;
    cout <<"Deduction: $" <<fixed<<showpoint<<setprecision(2) <<deduction <<endl;
    cout <<"Paid Tax: $" <<fixed<<showpoint<<setprecision(2) <<paidTax <<endl;
    cout <<"Tax Amount: $" <<fixed<<showpoint<<setprecision(2) <<res <<endl;
    cout <<"-----------------" <<endl;
    
    if (taxAmount > 0)
        cout <<"Due: $" <<fixed<<showpoint<<setprecision(2) <<taxAmount <<endl ;
    if (taxAmount < 0){
        taxAmount = fabs(taxAmount) ;
        cout <<"Refund: $" <<fixed<<showpoint<<setprecision(2) <<taxAmount <<endl ;
    }
    return 0 ;
}
int calculations(double w2, double interest, double paidTax, double deduction) {
    
    double taxRate, taxAmount, res;
    if (w2 <= 10000) {
        taxRate = 25; // tax rate % for income under or equal to 10000
    }
    if (w2 > 10000) {
        taxRate = 50 ; // tax rate % for income above 10000
    }
    
    taxAmount = fabs(w2 + interest - deduction) * taxRate / 100 ;
    res = taxAmount - paidTax ;

    printInvoice(w2, interest, deduction, paidTax, res, taxAmount);
    return 0;
}

bool    PINcorrect(int num) {
    if (num == 5678 || num == 8765)
        return 1;
    return 0;
}

int main() {
    
    int num ;
    double w2, interest, paidTax, deduction ;
    
    cout <<"Welcome to CalcTax. We help people to avoid getting in trouble with the government 😎👍.\n" ; // every good program needs a bad joke. every bad program needs it even more so here we are
    cout <<"Please enter the PIN code: " ;
    cin >> num;
    // if PIN is correct, go to the block that collects info for calculations
    if (PINcorrect(num) == 1) {
        goto jump ;
    }
    else {
        while ( num != 5678 || num != 8765){
         // if PIN is incorrect, ask for a PIN 3 more times
         for (int i = 1; i < 3; ++i) {
            // checks if next try contains correct PIN
            if (PINcorrect(num) == 1)
                goto jump ;
            
            cout <<"Invalid PIN code. Please try again. " <<endl;
            cout <<"Please enter the PIN code: " ;
            cin >> num ;
        }
            if (PINcorrect(num) == 1)
            goto jump ;
            // exit the program after 3 failed attempts to enter correct PIN
            cout <<"Invalid PIN code. You've reached the maximum number of retries.\n" ;
            return 0;
         }}
jump:
    cout <<"\nPlease enter the amount from W2 form: $" ;
    cin >> w2 ;
    cout <<"Please enter the interest income: $" ;
    cin >> interest ;
    cout <<"Please enter the amount for deduction: $" ;
    cin >> deduction ;
// protection from an invalid input
check:
    cout <<"Please enter the paid tax amount: $" ;
    cin >> paidTax ;
    if (paidTax < 0) {
        cout <<"Invalid amount. It cannot be negative\n" ;
        goto check ;
    }
    if (paidTax > (w2+interest)) {
        cout <<"Invalid amout. It canot be greater than your total income.\n" ;
        goto check ;
    }

    calculations(w2, interest, paidTax, deduction);
    
// ask the user if they want to calculate tax again
    char answer;
    cout <<"\nDo you want to calculate tax for another income?(y/n): " ;
    cin >> answer;

    if (answer == 'y' || answer == 'Y')
        goto jump ;
    if (answer == 'n' || answer == 'N')
        cout <<"\nThank you for using CalcTax 🖖.\n" ;
   
    return 0 ;
}
