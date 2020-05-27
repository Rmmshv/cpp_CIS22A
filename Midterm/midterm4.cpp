// function 4 from the midterm assignment
#include <iostream>
using namespace std;

void    checkYourGrade() {
    
    char g ;
    
    cout <<"Please enter your grade: ";
    cin  >> g;
jump:
//check the input and display corresponding result
    if (g == 'A' || g == 'a' || g == 'B' || g == 'b' || g == 'C' || g == 'c' )
        cout <<"Passed\n" ;
    
    else if (g == 'D' || g == 'd' || g == 'F' || g == 'f')
        cout <<"Failed\n" ;
    else
        // let user try up to 3 times if they entered incorrect input
        for (int i = 1; i < 3; i++ ) {
            if (g != 'A' || g != 'a' || g != 'B' || g != 'b' || g != 'C' || g != 'c' || g != 'D' || g != 'd' || g != 'F' || g != 'f') {
                cout <<"Invalid grade letter. Please try again\n"
                <<"Please enter your grade: " ;
                cin >> g ;
            }
            // if input is correct, check the grade and display the result
            if (g == 'A' || g == 'a' || g == 'B' || g == 'b' || g == 'C' || g == 'c' || g == 'D' || g == 'd' || g == 'F' || g == 'f')
                goto jump ;
            // if input is incorect all 3 times, display 'Failed' and exit the program
            if (i == 2)
                cout <<"Failed\n" ;
        }
}

int main() {
    checkYourGrade() ;
    return 0 ;
}

/*
Write a function named "checkYourGrade" that reads in a character from the
user and check for the following responses: ‘A’, ‘B’, ‘C’, ‘D’ or ‘F’ and return
true if the response is ‘A’, ‘B’ or ‘C” and false if ‘D’ or ‘F”. Any other response,
the function will print out “Invalid grade letter. Please try again.” and allow the
user to retry up to 3 times, then it will return false.
Here is an example of the function call and the output of several different runs:

int main()
{
 cout << (checkYourGrade()? "Passed" : "Failed") << endl;
 return 0 ;
}
Please enter your grade: B
Passed
Please enter your grade: F
Failed
Please enter your grade: Y
Invalid grade letter. Please try again.
Please enter your grade: N
Invalid grade letter. Please try again.
Please enter your grade: M
Failed
Please enter your grade: Y
Invalid grade letter. Please try again.
Please enter your grade: N
Invalid grade letter. Please try again.
Please enter your grade: A
Passed
*/
