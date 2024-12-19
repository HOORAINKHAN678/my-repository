#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    cout << "First element: " << *ptr << endl;
    cout << "Last element: " << *(ptr + 4) << endl;

    return 0;
}