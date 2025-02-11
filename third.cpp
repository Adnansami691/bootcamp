#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0){
    for (int i=1; i <= n; i++) {
        cout << i << "-even\n";
    }
    }
    else {
        for(int i=1;i <= n; i++)
        cout << i << "-odd\n"; 
    }

    return 0;
}