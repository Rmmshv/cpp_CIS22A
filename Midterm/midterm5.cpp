// function 5 of the midterm
#include <iostream>
using namespace std ;

void GetScoreTotalWithoutHighLow() {
    
    int max = 0,
        min = 1000000,
        num,
        sum,
        total,
        count = 0,
        lastMin = 0,
        lastMax = 0,
        lastNum = 0;
    
    for (int i = 0; num >= 0; i++) {
        cout <<"Please enter non-negative number: " ;
        cin >> num ;
        if (num < 0)
            break;
        if (num > max)
            max = num ;
        if (num < min)
            min = num ;
        
        sum+=num ;
        // store the last min, max and input for calculations
        lastNum = num ;
        lastMax = max ;
        lastMin = min ;
        // count iterations
        count++;
        
    }
    // if more than 2 input parameters, calculate and display the total
    if (count > 2){
        total = sum - min - max;
        cout <<"The total is " <<total <<endl ;
    }
    // if 2 or less parameters, display the following:
    else
        cout <<"The total is 0" <<endl ;
    
}
int main() {
    GetScoreTotalWithoutHighLow() ;
    return 0;
}

/*
Write a function named “GetScoreTotalWithoutHighLow.cpp” that reads in a
list of scores until the user enters a negative number. It will add all the given
scores up and subtract the largest and smallest scores to get a true score total. If
there are only 2 numbers or less entered, the total will be 0.
Note: please do not use array or vector class. Please use only local variables to
keep track the total, highest and lowest.
For example, here is the output of three separate runs:
- 3 -
Please enter non-negative score: 10
Please enter non-negative score: 50
Please enter non-negative score: 20
Please enter non-negative score: 25
Please enter non-negative score: -1
The total is 45
Please enter non-negative score: 10
Please enter non-negative score: 3
Please enter non-negative score: -1
The total is 0
Please enter non-negative score: 10
Please enter non-negative score: 20
Please enter non-negative score: 30
Please enter non-negative score: 40
Please enter non-negative score: 50
Please enter non-negative score: -1
The total is 90
*/
