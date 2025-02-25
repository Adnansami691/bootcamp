#include<iostream>
using namespace std;

int main() {
    int n=4, m=3;
    cin >> n >> m;
    int grid[n][m];
    for (int row =0;row<n;row++){
        for(int col;col<m;col++){
            cin >> grid[n][m];
        }
    }
    for(int row=0;row<n;row++){
        for (int col=0;col<m;col++){
            cout << grid[n][m] << " " << endl;
        }
    }


    return 0;
}