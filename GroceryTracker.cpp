#include "GroceryTracker.h"
#include <iostream>
#include <fstream>

using namespace std;

// Read the input file and count frequencies
void GroceryTracker::LoadData() {
    ifstream inputFile("CS210_Project_Three_Input_File.txt");

    if (!inputFile.is_open()) {
        cout << "ERROR: Could not open file." << endl;
        return;
    }


    string item;

    while (inputFile >> item) {
        itemFrequency[item]++;
    }

    inputFile.close();
}

// Create frequency.dat backup file
void GroceryTracker::WriteBackupFile() {
    ofstream outputFile("frequency.dat");

    for (const auto& pair : itemFrequency) {
        outputFile << pair.first << " "
            << pair.second << endl;
    }

    outputFile.close();
}

// Search for a specific item
void GroceryTracker::SearchItem(string item) {
    if (itemFrequency.count(item) > 0) {
        cout << item << " purchased "
            << itemFrequency[item]
            << " times." << endl;
    }
    else {
        cout << item << " purchased 0 times."
            << endl;
    }
}

// Print all frequencies
void GroceryTracker::PrintFrequencies() {
    for (const auto& pair : itemFrequency) {
        cout << pair.first << " "
            << pair.second << endl;
    }
}

// Print histogram
void GroceryTracker::PrintHistogram() {
    for (const auto& pair : itemFrequency) {

        cout << pair.first << " ";

        for (int i = 0; i < pair.second; i++) {
            cout << "*";
        }

        cout << endl;
    }
}