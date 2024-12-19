#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int sum = 0;

    // Input elements for the 3x3 matrix
    cout << "Enter elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate the sum of the main diagonal
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }

    // Display the sum of the main diagonal
    cout << "Sum of the main diagonal: " << sum << endl;

    return 0;
}