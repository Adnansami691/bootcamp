#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;  // Read the size of the array
    
    vector<int> A(N);  // Declare a vector of size N
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];  // Read the array elements
    }
    
    int X, V;
    cin >> X >> V;  // Read X (index) and V (new value)
    
    // Update the X'th index with V
    A[X] = V;
    
    // Print the array in reverse order
    for (int i = N - 1; i >= 0; i--) {
        cout << A[i] << " ";
    }
    
    return 0;
}