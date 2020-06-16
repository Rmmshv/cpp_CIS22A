#include <iostream>
using namespace std;

int getAverageScore() {
    int size = 50 ;
    int array[size] ;
    int i, total = 0, avrg = 0, min = 1000, max = 0 ;
    int c = 0 ;
    
    for (i = 0; i <= size; i++) {
        cout <<"Please enter numbers: " ;
        cin >> array[i] ;
        if (array[i] < 0)
            break ;
        // if input is positive add it to the total and increment counter
        if (array[i] >= 0) {
            total += array[i] ;
            c+=1 ;
        }
        if (array[i] > max )
            max = array[i] ;
        if (array[i] < min )
            min = array[i] ;
    }
    //cout <<c <<endl ;
    // if there are less than 3 input numbers return -1
    if ((c) < 3)
        return -1 ;
    // calculate the average and show the result
    else {
        avrg = (total - min - max) / (c-2);
        //cout <<"\nMax: " <<max <<endl ;
        //cout <<"Min: " <<min <<endl ;
        //cout <<"total: " <<total <<endl ;
        //cout <<"average: " <<avrg <<endl ;
        //cout <<c <<endl ;
        
    }
    return avrg;
}
int main() {
     cout <<getAverageScore() <<endl ;
    return 0 ;
}
