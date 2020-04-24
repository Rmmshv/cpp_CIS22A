//
//  main.cpp
//  PrintShape
//
//  Created by Rimma on 4/16/20.
//  Copyright © 2020 Rimma Esheva. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    char character;
    
    //choosing the shape
    cout << "Which shape do you want to display? (1 for triangle, 2 for square) ";
    cin >> number;
    
    //wrong input protection
    if (number != 1 && number != 2) {
        cout <<"Unsupported shape number.\n" ;
        return 0;
    }
    
    //choose the character to draw the shape
    cout << "Which character do you want to be used in the shape? ";
    cin >> character;
    
    //if user wants a triangle
    if (number == 1) {
        cout << "  " <<character <<endl ;
        cout << " " <<character <<character <<character <<endl ;
        cout <<character <<character <<character <<character <<character <<endl ;
    }
    
    //if user wants a square
    if (number == 2) {
        cout <<character<<" " <<character<<" " <<character<<" " <<character <<endl;
        cout <<character <<"     " <<character <<endl ;
        cout <<character <<"     " <<character <<endl ;
        cout <<character<<" " <<character<<" " <<character<<" " <<character <<endl;
    }
    
    return 0;
}
