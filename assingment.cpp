#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    for (int i=1;i <=N;i++){
        if (i%2 == 0)
            int sum = i + i;
        else if (i%3 == 0)
            int sum = i + i;
    }







    #include <iostream>
    using namespace std;
    
    int main() {
        int N;
        cin >> N; // Input the size of the tree
    
        int levels = (N + 1) / 2; // Number of levels in the tree body
        int maxWidth = N; // Maximum width of the tree (at the bottom level)
    
        // Print the tree body
        for (int i = 1; i <= levels; i++) {
            // Print leading spaces
            for (int j = 0; j < (maxWidth - (2 * i - 1)) / 2; j++) {
                cout << " ";
            }
            // Print asterisks
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    
        // Print the trunk
        for (int i = 0; i < levels; i++) {
            // Print leading spaces
            for (int j = 0; j < (maxWidth - 1) / 2; j++) {
                cout << " ";
            }
            // Print the trunk asterisk
            cout << "*" << endl;
        }
    
        return 0;
    }







    return 0;
}