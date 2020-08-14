#ifndef libraryBook_h
#define libraryBook_h
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std ;

// question 1
class LibraryBook {
private:
    int Id ;
    string title ;
    string status ;
public:
    LibraryBook(int Id, string title, string status)
    {
        this->Id = Id;
        this->title = title;
        this->status = status;
    }
    int getId() {
        return Id ;
    }
    string getTitle() {
        return title ;
    }
    string getStatus() {
        return status ;
    }
    void checkIn() {
        status = "Available" ;
    }
    void checkOut() {
        status = "Not Available" ;
    }
} ;
// question 2
vector<LibraryBook * > getAvailableBooks(vector<LibraryBook * >, int) ;
// question 3
bool checkForDuplicate(vector<LibraryBook>);
// question 4
bool checkPasswordRule(string) ;
// question 5
bool login() ;

#endif
