#include <iostream>
#include <cctype>
#include <cstring>
using namespace std ;

void    rotateRight(int arr[], int n) {
    int  i, last;
    
    last = arr[n - 1] ;
    for (i = n-1; i > 0; i--)
        arr[i] = arr[i - 1];
    //copy last element of array to first
    arr[0] = last;
    
    for (int i = 0; i < n; i++)
        cout <<arr[i] << " ";
    
}

int countNonAlpha(string s) {
    
    int count = 0, i;
    
    for (i = 0 ; i <= s.length(); i++) {
        if (isalpha(s[i])){
            i++;
        }
        else
            count++;
    }
    return count;
}

int countPositiveNegative(int arr[], int n) {
    int pos = 0, neg = 0, zeros = 0, i;
    
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++ ;
        else if (arr[i] < 0)
            neg++ ;
        else
            zeros++ ;
    }
    cout <<"How many positives: " <<pos << endl;
    cout <<"How many negatives: " <<neg << endl;
    return zeros;
}
int main() {
    
// test for function 1
    cout <<"Function 1:\n\n" ;
    int a[] = {10, 20, -30, -40, 50, 0, 60} ;
    int num = sizeof(a) / sizeof(a[0] ) ;
    cout <<countPositiveNegative(a, num) <<endl ;

// tests for function 2
    cout <<"----\n"
        <<"Function 2:\n\n";
    int arr[] = { 10, 20, 30};
    int arr1[] = { 1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0] );
    int n1 = sizeof(arr1) / sizeof(arr1[0] );
    rotateRight(arr, n) ;
    cout <<endl ;
    rotateRight(arr1, n1) ;
 
// tests for function 3
   cout <<"\n----\n"
    <<"Function 3:\n\n";
   cout <<countNonAlpha("Hello, World!") <<endl ;
   cout <<countNonAlpha("Hello, Wo,rld!") <<endl ;

    
    return 0;
}

