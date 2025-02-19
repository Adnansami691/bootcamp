#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    int a[n];
    for (int i=0;i< n;i++){
        cin >> a[i];
    }
    for (int i= 0;i< n;i++){
        sum = sum + a[i];
    }
    cout << sum << endl;
    int avg = 1.00 * sum / n;
    cout << avg << endl;
    return 0;
}