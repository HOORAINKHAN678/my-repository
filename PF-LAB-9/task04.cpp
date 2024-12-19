#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3];

    // Input elements of the first and second matrices
    cout << "Enter elements of the first 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix1[i][j];

    cout << "Enter elements of the second 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix2[i][j];

    // Display the sum of the matrices directly
    cout << "Sum of the two matrices:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}