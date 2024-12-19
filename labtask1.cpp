#include <iostream>
#include <string>

using namespace std;

int main() {
    const int maxUsers = 10;
    int ticketPrice, popcornPrice, numUsers;
    int totalCost = 0;

    cout << "Enter the ticket price: ";
    cin >> ticketPrice;
    cout << "Enter the popcorn price: ";
    cin >> popcornPrice;

    cout << "How many users attend the event (Maximum 10): ";
    cin >> numUsers;

    if (numUsers > maxUsers) {
        cout << "Error: Not more users allowed." << endl;
        return 1;  // Exit the program if users exceed the maximum allowed
    }

    string users[numUsers];
    
    for (int i = 0; i < numUsers; ++i) {
        cout << "Enter name for user " << i + 1 << ": ";
        cin >> users[i];
    }

    cout << "\nUser names for the event:\n";
    for (int i = 0; i < numUsers; ++i) {
        int individualCost = ticketPrice + popcornPrice;
        totalCost += individualCost;
        
        cout << "User " << i + 1 << ": " << users[i]
             << " - Total Cost: " << individualCost << endl;
    }

    cout << "\nTotal cost for all users: " << totalCost << endl;
    
    return 0;
}

