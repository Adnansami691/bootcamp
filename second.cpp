#include<bits/c++io.h>
#include<iostream>
using namespace std;
main(){
    int tk = 30;

    if (tk >= 200){
        cout << "burger";
    }
    else {
        cout << "no burger!! \n";
        cout << "hello";
    }


    int y = 500;
    if (y >= 0) {
        if(y == 500){
            cout << "\nburger + pizza";
        }
        else {
            cout << "Nothing";
        }
    }
    int num;
    cin >> num;
    if (num % 2 == 0){
        cout << "Even";
    }
    else {
        cout << "Odd";
    }
    return 0;
}