#include <iostream>
#include <cstring>
using namespace std;

bool isANumberString(string s) {
    
    bool isNum = true;
    for (int i = 0; i <= s.length()-1; i++){
        if (s[i] == '+' || s[i] == '-')
            i++;
        if ((s[i] >= 'A' && s[i] <= 'Z' ) || (s[i] >= 'a' && s[i] <= 'Z'))
            isNum = false;
        if (s[i] >= 0 && s[i] <=9)
            isNum = true;
    }
    return isNum;
}

void calculateOneDayPay(double h, double basePay) {
    double total;
    
    if (h > 24 || h < 0)
        cout <<"$-1" <<endl;
    else if (h <= 8) {
        total = h * basePay;
        cout <<"$"<<total <<endl;
    }
    else if (h>0 && h > 8 && h <= 12) {
        total = (8 * basePay) + ((h - 8) * (basePay * 1.5)) ;
        cout <<"$"<<total <<endl;
    }
    else if (h >= 12 && h <= 24) {
        total = ((h-12) * (basePay*2)) + ((12-8) * (basePay * 1.5)) + (basePay * (8));
        cout <<"$" <<total <<endl;
    }
}


bool    hasTheRightKey(int secretKey) {
    
    int key;
    bool res = true;
    cout <<"Please enter the secret key: " ;
    cin >> key;
    
    if (key == secretKey)
        res = true;
    else
        for (int i = 1; i < 3 ; i++){
            if (key == secretKey){
                res = true;
                break;
            }
            cout <<"Please enter the secret key: " ;
            cin >> key;
            if (key == secretKey){
                res = true;
                break;
            }
            res = false;
        }
    return res;
}

bool    isAschending() {
    int n, n1, n2;
    bool res = true;

    cout <<"Please enter a positive number: ";
    cin >> n;

    cout << "Please enter another positive number: ";
    cin >> n1;

    if (n < n1){
        res = true;
        cout<<res<<endl;
    }
    else{
        res = false;
        cout<<res<<endl;
    }
jump:
    cout << "Please enter another positive number: ";
    cin >> n2;
    if (n2 > n1 && n2 > n){
        res = true;
        cout<<res<<endl;
    }
    else{
        res = false;
        cout<<res<<endl;
    }
    while (n1>0 && n2>0)
    goto jump;
    
    return res;
    
}
int main() {
// function 1 test
    isAschending();
   
// function 2 test
    cout <<"---\n" ;
    cout << hasTheRightKey(123456) << endl;
    
// function 4 tests
    cout <<"---\n" ;
    cout << isANumberString("123456") << endl ;
    cout << isANumberString("+1234") << endl ;
    cout << isANumberString("-4567") << endl ;
    cout << isANumberString("123A") << endl;
    cout << isANumberString("A456") << endl ;
// function 3 tests
   cout <<"---\n" ;
   calculateOneDayPay(-10, 10) ;
   calculateOneDayPay(25, 10) ;
   calculateOneDayPay(6, 10) ;
   calculateOneDayPay(8, 10) ;
   calculateOneDayPay(10, 10) ;
   calculateOneDayPay(12, 10) ;
   calculateOneDayPay(14, 10) ;
   calculateOneDayPay(20, 10) ;
   calculateOneDayPay(24, 10) ;
    
    return 0;
}

