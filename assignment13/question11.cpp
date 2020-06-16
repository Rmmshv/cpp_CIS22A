#include <iostream>
using namespace std ;

int * arrayExpander(int arr[], int size) {
    int * arrExpnd = new int[size * 2] ;
    
    // move elements to expander array and fill empty spaces with 0's
    for (int i = 0; i < size * 2; i++) {
        // if there are less than size elements, fill new array with passed values
        if (i < size) {
            arrExpnd[i] = arr[i] ;
        }
        // fill the rest with 0's
        else {
            arrExpnd[i] = 0;
        }
    }
    return arrExpnd ;
    
}
int main ()
{
// test
    const int SIZE = 5 ;
    int arr[SIZE] = {1, 2, 3, 4, 5} ;
    int * p1 = nullptr ;
    p1 = arrayExpander(arr, SIZE);
    
    cout <<"Final result: " ;
    
    // print the result
    for (int i = 0; i < SIZE * 2; i++)
        cout <<* (p1 + i) ;
    
    cout <<endl ;
    return 0 ;
}

