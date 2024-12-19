#include <iostream>
using namespace std;

int main() {
    int numbers[3]; // Declare a 1x3 array

    // Input 3 numbers
    cout << "Enter three numbers:" << endl;
    for (int i = 0; i < 3; i++) {
        cin >> numbers[i];
    }

    // Find the minimum number
    int min = numbers[0]; // Assume the first element is the min
    for (int i = 1; i < 3; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // Display the minimum number
    cout << "The minimum number is: " << min << endl;

    return 0;
}