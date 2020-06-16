#include <iostream>
using namespace std ;

int * reverseArray(int arr[], int size) {
    
    int j = size - 1,
        * pCopy = new int [size];
    // reverse array elements
    for (int i = 0; i < size; i++) {
        
        *(pCopy + i) = arr[j] ;
        j-- ;
    }
    // return a pointer to the new array
    return pCopy ;
}

int main() {
// test
    const int SIZE = 4 ;
    int numbers[SIZE] = {4, 3, 2, 1} ;
    int * p1 = nullptr ;
    
    p1 = reverseArray(numbers, SIZE) ;
    for (int i = 0; i < SIZE; i++) {
        cout <<* (p1 + i) <<" " ;
    }
    cout <<endl ;
    return 0 ;
}



