#include <iostream>
using namespace std;

int main() {
    int sales[3][5]; // 3 employees, 5 days
    int employeeTotal[3] = {0}; // Total sales for each employee
    int dayTotal[5] = {0}; // Total sales for each day
    int overallTotal = 0; // Overall sales for the week

    // Input sales data for each employee and each day
    cout << "Enter sales for 3 employees over 5 days (row for employees, column for days):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Employee " << i + 1 << ", Day " << j + 1 << ": ";
            cin >> sales[i][j];
        }
    }

    // Calculate the total sales for each employee, each day, and overall
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            employeeTotal[i] += sales[i][j]; // Total sales for each employee
            dayTotal[j] += sales[i][j]; // Total sales for each day
            overallTotal += sales[i][j]; // Total sales for the week
        }
    }

    // Display the total sales for each employee
    cout << "\nTotal sales for each employee over the week:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Employee " << i + 1 << ": " << employeeTotal[i] << endl;
    }

    // Display the total sales for each day
    cout << "\nTotal sales for each day:\n";
    for (int j = 0; j < 5; j++) {
        cout << "Day " << j + 1 << ": " << dayTotal[j] << endl;
    }

    // Display the overall total sales for the week
    cout << "\nOverall sales for the week: " << overallTotal << endl;

    return 0;
}
