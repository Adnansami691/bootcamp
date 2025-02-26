#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int grid[n+1][n+1];
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            cin >> grid[row][col];
        }
    }
    bool idm = true;

    for(int row =1;row<=n;row++){
        for(int col =1;col <= n;col++){
            if(row == col && grid[row][col] == 1){
                idm = true;
            }
            else{
                idm = false;
            }
            if(row != col){
                if(grid[row][col] == 0){
    
                }
                else{
                    idm = false;
                }
            
        }
            }
            //uyfiwuhvi;aebfv;iuWVUbwuih
            //avbetbesnmdn egSFDAV 
    }
    if(idm){
        cout << "hola!!";    
    }
    else{
        cout << "Bonjuor!!";
    }
    return 0;
}