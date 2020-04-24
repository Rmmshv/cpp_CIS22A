//
//  main.cpp
//  BuyItems
//
//  Created by Rimma on 4/14/20.
//  Copyright © 2020 Rimma Esheva. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double price, tax, total, invoice;
    int quantity;
    string name;
    
    //ask item's name
    cout << "Welcome to our store." <<endl<< "Please enter the item's description: ";
    getline (cin, name);
    
    //ask item's price
    cout << "Please enter the item's price: ";
    cin >> price;
    
    //ask how many item's needed
    cout << "Please enter the quantity: ";
    cin >> quantity;
   
    //calculate the total price
    total = price * quantity;
    //calculate the tax
    tax = total * 25 / 100;
    //final price
    invoice = total + tax;
    
    //restricting the output to 2 decimals
    cout << fixed << showpoint;
    cout << setprecision(2);
    
    //print the invoice
    cout <<endl;
    cout <<"----------------------------------" <<endl;
    cout <<"Invoice"<<endl;
    cout <<"Item's description: " << name <<endl;
    cout <<"Unit price: $" <<price <<endl;
    cout <<"Quantity: " <<quantity <<endl;
    cout <<"Total: $" <<total <<endl;
    cout <<"Tax(25%): $" <<tax <<endl;
    cout <<"Invoice amount: $" <<invoice <<endl;
    
    return 0;
}
