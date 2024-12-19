#include <iostream>
using namespace std;

int main() {
    // Declare a 3x3 matrix
    int matrix[3][3];

    // Input elements in matrix
    cout << "Enter elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Display the transpose of the matrix directly
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
