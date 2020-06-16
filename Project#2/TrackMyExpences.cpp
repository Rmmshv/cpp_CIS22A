#include <iomanip>
#include <iostream>
#include <cctype>
using namespace std ;

// OPTION 1 (SHOW MENU)
void    menu() {
    cout <<"\nExpence Tracking Menu:\n"
        <<"1. show all\n"
        <<"2. spend\n"
        <<"3. search expences containing this string\n"
        <<"4. search expences with greater than or equal to this amoun\n"
        <<"5. exit\n"
        <<"Enter your option: " ;
}
// OPTION 1 (SHOW ALL)
void    showInputs(int *entriesCount, double amounts[], string description[]) {
    int i = 0 ;
    // check if valid (not empty)
    if (amounts[i] == '\0' || *entriesCount == 0) {
        cout <<"\nThere is no expense entry available." <<endl ;
    }
    else {
        cout <<"\nExpenses:\n" ;
        while (i < *entriesCount){
            cout <<"AMOUNT(" <<amounts[i] <<")" <<" "
                <<"DESC(" <<description[i] <<")" <<endl ;
            i++ ;
        }
    }
}

// OPTION 2 (SPEND)
void    addSpend(int *entriesCount, double *amounts, string *description) {
    string userInput ;
    // prompt user for the input
    cout <<"Please enter the description for the expense: " ;
    cin.ignore() ;
    getline(cin, userInput) ;
    // dtore input in array
    description[*entriesCount] = userInput ;

jump:
    cout <<"Please enter the amount: " ;
    cin  >> amounts[*entriesCount] ;
    
    // if input is negative or zero keep asking for another input untill it's valid
    if (amounts[*entriesCount] <= 0) {
        cout <<"Invalid amount. Amount cannot be negative or string. Please try it again.\n" ;
        goto jump ;
    }
    // display the inputs
    cout <<"AMOUNT(" <<amounts[*entriesCount] <<")" <<" "
         <<"DESC(" <<description[*entriesCount] <<")" <<endl ;
    *entriesCount+=1 ;
           
}
// OPTION 3 (SEARCH EXPENSES CONTAINING THIS STRING)
void findStr(int *entriesCount, double *amounts, string *description) {
    // prompt user for a string
    cout <<"Please enter the search string: " ;
    string s ;
    cin >> s ;
    // convert entered string to lowercase to make it case-insensitive
    for (int i = 0; i <= sizeof(s); i++) {
        if (isupper(s[i]))
            s[i] = tolower(s[i]) ;
        if (islower(s[i]))
            s[i] = s[i] ;
        if (!isalpha(s[i]))
            s[i] = s[i] ;
       }
       // serch for a string through array and display if found
    for (int i = 0; i < *entriesCount; i++) {
        size_t found = description[i].find(s) ;
        if (found != string::npos)
            cout <<"AMOUNT(" <<amounts[i] <<")" <<" "
                 <<"DESC(" <<description[i] <<")" <<endl ;
    }
}

// OPTION 4 (SEARCH EXPENSES GREATER THAN OR EQUAL TO THE AMOUNT)
void findAmount(int *entriesCount, double *amounts, string *description) {
    
    cout <<"Please enter the amount: " ;
    double amount ;
    cin >> amount ;
    
    for (int i = 0; i < *entriesCount; i++) {
        if (amounts[i] >= amount)
            cout <<"AMOUNT(" <<amounts[i] <<")" <<" "
                 <<"DESC(" <<description[i] <<")" <<endl ;
    }
}

int main() {
    double amounts[1000] ;
    string description[1000] ;
    int entriesCount = 0, option = 0 ;
    
    cout <<"Welcome to my expence tracker.\n" ;
    do {
        menu() ;
        cin >>option ;
        switch (option) {
            case 1:
                showInputs(&entriesCount, amounts, description) ;
                break ;
            
            case 2:
                addSpend(&entriesCount, amounts, description) ;
                break ;
            
            case 3:
                findStr(&entriesCount, amounts, description) ;
                break ;
                
            case 4:
                findAmount(&entriesCount, amounts, description) ;
                break ;
            case 5:
                break ;
        }
    }while (option != 5) ;
    cout <<"Thank you for using MyExpenses program.\n" ;
    return 0;
}
