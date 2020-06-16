#include <iostream>
using namespace std ;

int deleteZeros(int *arr, int num) {
    
    int nonZero = 0, i, j = 0, deleted = 0;
    int *finalArr ;
    
    // check each element of the array for zeros
    for (i = 0; i < num; i++) {
        // if current element is not a zero, add 1 to the size of the final array
        if (arr[i] != 0)
            nonZero++ ;
        // if current element is a zero, add 1 to the counter of deleted zeros
        else
            deleted++ ;
    }
    finalArr = new int[nonZero] ;
    
    // if array element is not zero, assign it to the final array
    for(int i=0; i < num; i++){
        if(arr[i] != 0)
            finalArr[j++] = arr[i];
    }

    // print the final array
    cout <<"Final result: \n" ;
    for (i = 0 ; i < nonZero ; i++) {
        cout <<finalArr[i] <<" " ;
    }
    
    cout <<endl ;
    cout <<"Zeros deleted: " ;
    return (deleted) ;
}

int main() {
    
    int numList[] = {10, 0, 20, 30, 40, 0, 50} ;
    cout <<deleteZeros(numList, 7) <<endl <<endl;
    
    int numList1[] = {0, 0, 20, 30, 40, 0, 50} ;
    cout <<deleteZeros(numList1, 7) <<endl <<endl;

    return 0;
}
