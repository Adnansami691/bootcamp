#include<iostream>
using namespace std;

int main() {
    string s;
    string A;
    string a;
    cin >> s;
    int index =0;
    int asciivalue;
    for(int i=0;is;i++){
        if(i >=(int)65 && i<= (int)90){
            A = i;
        }
        else {
            a = i;
        }
    }
    cout << a << " ";
    cout << A;

    return 0;
}