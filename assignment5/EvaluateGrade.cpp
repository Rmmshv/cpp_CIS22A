//
//  main.cpp
//  EvaluateGrade
//
//  Created by Rimma on 4/23/20.
//  Copyright © 2020 Rimma Esheva. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    //declare the variable
    char grade;
    
    // setting up bool to repeat the question if the default case is reached
    bool repeat;
    
    do {
        cout <<"Please enter your grade: ";
        cin  >> grade;
        
        switch(grade) {
            case 'A':
            case 'a':
            case 'B':
            case 'b':
            case 'C':
            case 'c':
                cout <<"You have passed the cource, congrats!" <<endl;
                repeat = false;
                break;
                
            case 'D':
            case 'd':
            case 'F':
            case 'f':
                cout <<"You did not pass the course. RIP" <<endl ;
                repeat = false;
                break;
                
            default:
                cout <<"Invalid grade letter. Please try again" <<endl;
                repeat = true;
                break;
        }
    }while(repeat) ;

    return 0;
}
