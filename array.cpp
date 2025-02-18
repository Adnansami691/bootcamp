#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int marks[n];
    for (int i = 0;i < n;i++){
        cin >> marks[i];

    }
    for (int k=0;k < n;k++){
        cout << marks[k] << endl;
    }

    return 0;
}