#include <iostream>
using namespace std ;

double medianFunction(int * arr, int size) {
    int index, val ;
    double median ;

// sort array
    for (int i = 0; i < size - 1; i++) {
        val = arr[i] ;
        index = i ;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                val = arr[j] ;
                index = j ;
            }
        }
        arr[index] = arr[i] ;
        arr[i] = val ;
    }
    // check if set is even or odd
    if (size % 2 == 0)
        median = (arr[size/2] + arr[size/2 - 1]) / 2.0 ;
    else
        median = arr[(size-1) / 2] ;
    
    return median ;
}

int main ()
{
// tests
    const int SIZE = 6, SIZE1 = 5 ;
    int arr[SIZE] = {1, 2, 3, 4, 5, 6} ;
    int arr1[SIZE1] = {1, 2, 3, 4, 5} ;
    double res = medianFunction(arr, SIZE);
    double res1 = medianFunction(arr1, SIZE1);
    // print the result
    cout <<"Final results: " <<endl ;
    cout <<"test1: " <<res <<endl ;
    cout <<"test2: " <<res1 <<endl ;
    
    cout <<endl ;
    return 0 ;
}
