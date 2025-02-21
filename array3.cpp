#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i < n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0;i<m;i++){
        cin >> b[i];
    }
    int c[n + m];
    int index = 0;
    for(int i =0; i < n; i++){
        c[index] = a[i];
        index++;
    }
    for (int i =0;i<m; i++){
        c[index] = b[i];
        index++;
    }
    for (int i =0;i < n +m;i++){
        cout << c[i] << " ";
    }

    return 0;
}