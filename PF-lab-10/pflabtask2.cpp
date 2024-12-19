#include <iostream>
using namespace std;

int main() {
    //  Declare and initialize array
    int arr[5] = {10, 20, 30, 40, 50};

    //  Declare a pointer pointing to the first element of the array
    int *ptr = arr;

    //  Use the pointer to access and print each element
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << " = " << *ptr << endl;
        ptr++;  // Move the pointer to the next element
    }

    return 0;
}