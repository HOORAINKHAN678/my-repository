#include <iostream>
using namespace std;

int main() {
    int a = 10; 

    cout << "Address of a: " << &a << endl;

    int *ptr = &a;
    cout << "Value at memory location pointed by ptr: " << *ptr << endl;

    cout << "Address stored in ptr: " << ptr << endl;

    *ptr = 100;

    cout << "Updated value of a: " << a << endl;

    return 0;
}