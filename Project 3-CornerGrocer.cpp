#include "GroceryTracker.h"
#include <iostream>

using namespace std;

#include "GroceryTracker.h"
#include <iostream>

using namespace std;

int main() {
    GroceryTracker tracker;

    // Read the input file and build the frequency map
    tracker.LoadData();

    // Create the backup file
    tracker.WriteBackupFile();

    int choice = 0;
    string itemName;
   
    while (choice != 4) {
        cout << "\nCorner Grocer Menu\n";
        cout << "1. Search for an item\n";
        cout << "2. Display all item frequencies\n";
        cout << "3. Display histogram\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter item name: ";
            cin >> itemName;
            tracker.SearchItem(itemName);
            break;

        case 2:
            tracker.PrintFrequencies();
            break;

        case 3:
            tracker.PrintHistogram();
            break;

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice. Please enter 1-4.\n";
        }
    }

    return 0;
}