#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << "Forward order!" << endl;
    for (int i=0;i<n;i++){
        cout << a[i]<< " ";
    }
    cout << endl;
    cout << "Reverse order!" << endl;
    // for (int i= n-1;i>=0;i--){
    //     cout << a[i] << " ";
    // }
    int index = 0;
    for (int i = n-1;i >= 0;i--){
        b[index] = a[i];
        index++;
    }
    for (int i=0; i < n; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}