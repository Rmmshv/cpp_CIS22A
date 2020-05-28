// function 3 from the midterm assignment
#include <iostream>
using namespace std ;

void isTheSmallestLast() {
    
    int max = 0,
       num = 1,
       min = 1000000,
       lastNum = 0 ;
    // run the loop until the user enters 0
    for (int i=0; num != 0; i++)
    {
        cout <<"Enter the numbers (0 to end input): " ;
        cin >>num;
        // if user enters 0 end exit the loop
        if(num == 0)
            break ;
        
        if (num < min)
            min = num;
        
        if (num > max)
            max = num;
        // store the previous input to compare it with min amd max
        lastNum = num;
    }
    // display the output
    if (lastNum == min && lastNum != 0)
        cout <<"True. The smallest is: " <<min <<endl ;
    if (lastNum != min && lastNum != 0)
        cout <<"False. The smallest is: " <<min <<endl ;
    
    // if the first input is 0 display the following
    if(lastNum == 0)
        cout <<"False. The smallest is 0." <<endl ;
}

int main() {
    isTheSmallestLast() ;
    return 0;
}

/*
Write a function named "isTheSmallestLast" that reads in from the user inputs a
list of numbers until the user enters 0. It will return true if the last number is the
smallest number in that list and false otherwise. In addition, it also returns the
actual value of the smallest number to the caller in the output parameter.
For example, if the user enters 50, 30, 40, 10, 0, it will return true and 10 in the
output parameter.
If the user enters 50, 10, 40, 30, 0, it will return false and 10 in the output
parameter.
If the user enters 0 immediately, it will return false and 0 for the smallest.
*/
