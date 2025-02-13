#include<iostream>
using namespace std;


int main(){
    int star = 1;
    for (int i=0;i<=5;i++ ){
   
        for (int j= 1;j<= star ;j++){
        cout << "*";
    }
        cout << endl;
        star++;
    }



    return 0;
}




// * -> loop 1 time
// ** -> loop 2 times
// *** -> loop 3 times
// **** -> loop 4 times
// ***** -> loop 5 times