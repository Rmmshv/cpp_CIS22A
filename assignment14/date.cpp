#include <iostream>
using namespace std;

class Date {
private:
    int day ;
    int month ;
    int year ;
    
public:
    Date (int dd, int mm, int yy) {
        day = dd ;
        month = mm ;
        year = yy ;
    }
    
    void form1() {
        cout <<month <<"/" <<day <<"/" << year <<endl ;
    }
    
    void form2() {
        string s ;
        switch(month) {
            case 1:
                s = "January" ;
                break ;
            case 2:
                s = "February" ;
                break ;
            case 3:
                s = "March" ;
                break ;
            case 4:
                s = "April" ;
                break ;
            case 5:
                s = "May" ;
                break ;
            case 6:
                s = "June" ;
                break ;
            case 7:
                s = "July" ;
                break ;
            case 8:
                s = "August" ;
                break ;
            case 9:
                s = "September" ;
                break ;
            case 10:
                s = "October" ;
                break ;
            case 11:
                s = "November" ;
                break ;
            case 12:
                s = "December" ;
                break ;
        }
        cout <<s <<" " <<day <<", " <<year <<endl ;
    }
    void form3() {
        string s ;
        switch(month) {
            case 1:
                s = "January" ;
                break ;
            case 2:
                s = "February" ;
                break ;
            case 3:
                s = "March" ;
                break ;
            case 4:
                s = "April" ;
                break ;
            case 5:
                s = "May" ;
                break ;
            case 6:
                s = "June" ;
                break ;
            case 7:
                s = "July" ;
                break ;
            case 8:
                s = "August" ;
                break ;
            case 9:
                s = "September" ;
                break ;
            case 10:
                s = "October" ;
                break ;
            case 11:
                s = "November" ;
                break ;
            case 12:
                s = "December" ;
                break ;
            }
            cout <<day <<" " <<s <<" " <<year <<endl ;
        }
} ;

int    collect_input() {
    int n ;
    cout <<"Please enter the input (dd/mm/yyyy): " ;
    cin >>n ;
    
    return n ;
}

int main() {
    int d, y, m ;
    
jump1:
    d = collect_input() ;
    if (d < 1 || d > 31) {
        cout <<"Invalid input. PLease try again.\n" ;
        goto jump1 ;
    }
    
jump2:
    m = collect_input() ;
    if (m < 1 || m > 12) {
        cout <<"Invalid input. PLease try again.\n" ;
        goto jump2 ;
    }
    
    y = collect_input() ;
    
    Date date (d, m, y) ;
    
    date.form1() ;
    date.form2() ;
    date.form3() ;
    
    cout <<"\nThank you for using my program :)\n" ;
    return 0 ;
}

