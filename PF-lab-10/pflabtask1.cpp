#include <iostream>
using namespace std;

int main() {
    int a = 30, b = 40;
    int *temp;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = &a;
    a = b;
    b = *temp;

    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}