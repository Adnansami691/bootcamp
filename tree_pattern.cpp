#include<iostream>
using namespace std;

int main() {
    for (int i= 0;i < 9; i++){
        for (int j=0; j < 9-i-1; j++){
            cout <<" ";
        }
        for (int k=0;k < i*2+1;k++){
            cout <<"*";
        }
        cout<<endl;
    }
    for (int i= 0; i< 3; i++){
        for (int i =0;i < 3;i++){
            cout<<" ";
        }
        for(int i=0;i < 3;i++){
            cout<< "*";
        }
        cout<< endl;
    }
    
    
    
    return 0;


}