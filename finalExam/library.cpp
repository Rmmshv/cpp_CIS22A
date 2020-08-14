#include "libraryBook.h"
#include <iostream>
#include <vector>
using namespace std ;

// Question #2
vector<LibraryBook * > getAvailableBooks(vector<LibraryBook * > books, int size) {
    vector<LibraryBook * > newBooks ;
    
    // find and return available books
    for (int i = 0; i < size; i++) {
        if (books[i]->getStatus().compare("Available") == false)
            newBooks.push_back(books[i]) ;
    }
    return newBooks ;
}

// Question #3
bool checkForDuplicate(vector<LibraryBook*> v) {
    
    for (int i = 0; i < v.size(); i++) {
        for(int j=i+1; j<v.size(); j++) {
            if(v[i]->getId() == v[j]->getId())
                return true;
        }
    }
    return false;
}
// Question #4
bool checkPasswordRule(string pass) {
    bool isValidLen = false, isValPass = false, isNum = false,  isCap = false;
    
    // check if there's at least 1 digit
    for (int i = 0; i < pass.length(); i++) {
        if (pass[i] >= '0' && pass[i] <= '9'){
            isNum = true ;
            break ;
        }
    }
    // cout <<"num " <<isNum <<endl ;
    
    // chech that password is at leat 8 chars long
    if (pass.length() > 7)
        isValidLen = true ;
    else
        isValidLen = false ;
    //cout <<"len " <<isValidLen <<endl ;
    
    // check if there's at least one capital char
    for (int i = 0; i <= pass.length(); i++) {
        if (pass[i] >= 'A' && pass[i] <= 'Z') {
            isCap = true ;
            break ;
        }
    }
    // check if password is calid
    if (isValidLen == true && isCap == true && isNum == true)
        isValPass = true ;
    else
        isValPass = false ;
    
    return isValPass ;
}

// Question #5
bool login() {
    int count ;
    string login, pass ;
    bool isValid = false ;

    for (count = 0; count <= 3; count++) {
        // if input is invalid more than 3 times, return false
        if (count == 3) {
            isValid = false ;
            cout <<"You exceeded the amount of tries.\n" ;
            break ;
        }
        // prompt user for a login and a password
        cout <<"Please enter your login: " ;
        cin >>login ;
        cout <<"Please enter your password: " ;
        cin >>pass ;
        // check if input is valid
        if (login == "myname" && pass == "mypassword") {
            isValid = true ;
            break ;
        }
        else
            cout <<"Incorrect login or/and password.\n" ;
    }
    return isValid ;
}

int main() {
 
// question 5 test
    login() ;
    
// questions 1-2 test
    // add new objects
    vector<LibraryBook * > v ;
    v.push_back(new LibraryBook(12345, "Introduction to C++", "Available")) ;
    v.push_back(new LibraryBook(12345, "Introduction to Java", "Not Available")) ;
    v.push_back(new LibraryBook(54321, "Foundation", "Available")) ;
    vector<LibraryBook * > booksTot ;
    booksTot = getAvailableBooks(v, 3) ;
        
    // display available books
    cout <<"\nAll available books:\n" ;
    for (LibraryBook *book:booksTot)
        cout <<"ID: " <<book->getId() <<" Title: " <<book->getTitle() <<" Status: " <<book->getStatus() <<endl;
        cout <<"\n" ;
    
// question 3 test
    // should return TRUE
    bool x = checkForDuplicate(v);
    cout <<"Checking for duplicates...\n" ;
    // id's to search TRUE
    for (LibraryBook *book:v) {
        cout <<"ID: " <<book->getId() <<endl ;
    }
    if (x == 1)
        cout <<"Duplicate found.\n" ;
    else
        cout <<"No duplicates found.\n" ;
    
    // should return FALSE
    vector<LibraryBook*> v1 ;
    v1.push_back(new LibraryBook(1, "Introduction to C++", "Available")) ;
    v1.push_back(new LibraryBook(2, "Introduction to Java", "Not Available")) ;
    v1.push_back(new LibraryBook(5, "Foundation", "Available")) ;
    
    bool x1 = checkForDuplicate(v1) ;
    cout <<"\nChecking for duplicates...\n" ;
    for (LibraryBook *book:v1) {
        cout <<"ID: " <<book->getId() <<endl ;
    }
    if (x1 == 1)
        cout <<"Duplicate found.\n" ;
    else
        cout <<"No duplicates found.\n" ;
    
// question 4 test
    cout <<"\nChecking if password is valid...\n" ;
    cout << boolalpha << checkPasswordRule("HelloWorld123") << endl;
    cout << boolalpha << checkPasswordRule("Hello12") << endl;
    cout << boolalpha << checkPasswordRule("helloworld123") << endl;
    cout << boolalpha << checkPasswordRule("HelloWorld") << endl <<endl;
    
    return 0 ;
}

