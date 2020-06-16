#include <iostream>
#include <ctime>
using namespace std ;

int main() {
    
    int i, j, numTotal, randomNum ;
// ask for the amount of random numbers to be generated
    cout <<"Welcome.\nPlease enter how many random numbers you want to generate: " ;
    cin >> numTotal ;
    // if number is negative or 0 keep asking
    while (numTotal <= 0) {
        cout <<"Number cannot be negative or zero. Please try again.\n" ;
        cout <<"Please enter how many numbers you want to generate: " ;
        cin >> numTotal ;
    }
    
    int arr[numTotal] ; // array to store the numbers
    bool check[numTotal] ; // bool array to check if numbers are unique
    
// generate first random num and store in the first element of the array
    randomNum = rand() % 1000 + 1;
    arr[0] = randomNum ;

    for (i = 0; i < numTotal; i++) {
        for (j = 0; j < numTotal; j++) {
            // generate new number
            randomNum = rand() % 1000 + 1 ;
            // if random is unique, current bool element is set to true
            if (randomNum != arr[i]) {
                check[j] = true ;
                // if new fenerated num is unique, store it in the int array
                if (check[j] == 1)
                    arr[i+1] = randomNum ;
            }
        }
    }
// display generated numbers
    for (int i = 0; i < numTotal ; i++) {
        cout <<arr[i] << " "  ;
    }
    cout <<endl
        <<"Thank you for using my program. " <<endl ;
    return 0;
}

