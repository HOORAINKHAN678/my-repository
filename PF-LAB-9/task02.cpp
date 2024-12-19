#include <iostream>
using namespace std;

int main() {
    int numbers[3]; // Declare a 1x3 array

    // Input 3 numbers
    cout << "Enter three numbers:" << endl;
    for (int i = 0; i < 3; i++) {
        cin >> numbers[i];
    }

    // Find the maximum number
    int max = numbers[0]; // Assume the first element is the max
    for (int i = 1; i < 3; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Display the maximum number
    cout << "The maximum number is: " << max << endl;

    return 0;
}
