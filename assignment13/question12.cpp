#include <iostream>
using namespace std ;

int * elementShifter(int arr[], int size)
{
    int j = 1, i = 0,
        * pArr = new int [size+1] ; // size +1 to reserve space for a 0
    
    pArr[0] = 0 ;
    for (i = 0; i < size; i++) {
        pArr[j] = arr[i] ;
        j++ ;
    }
    return pArr ;
}
int main ()
{
// test
    const int SIZE = 4 ;
    int arr[SIZE] = {1, 2, 3, 4} ;
    int * p1 = nullptr ;
    
    p1 = elementShifter(arr, SIZE);
    cout <<"Final result: " ;
    
    // print the result
    for (int i = 0; i < SIZE + 1; i++)
        cout <<* (p1 + i) ;
    
    cout <<endl ;
    return 0 ;
}

