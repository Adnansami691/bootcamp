#include <iostream>
using namespace std;

void printTree(int trunkWidth) {
    // Print the leaves of the tree (always 7 lines)
    for (int i = 1; i <= 7; i++) {
        // Print spaces to center the leaves
        for (int j = 0; j < 7 - i; j++) {
            cout << " ";
        }
        // Print the leaves
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Print the trunk of the tree (always 5 lines tall)
    for (int i = 0; i < 5; i++) {
        // Print spaces to center the trunk
        for (int j = 0; j < 7 - (trunkWidth / 2 + 1); j++) {
            cout << " ";
        }
        // Print the trunk
        for (int j = 0; j < trunkWidth; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int trunkWidth;

    // Ask the user for the width of the trunk
    cout << "Enter the width of the trunk (odd number): ";
    cin >> trunkWidth;

    // Check if the input is valid (positive integer)
    if (trunkWidth <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    // Print the tree
    printTree(trunkWidth);

    return 0;
}