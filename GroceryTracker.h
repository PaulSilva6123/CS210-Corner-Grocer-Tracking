#pragma once
#include <map>
#include <string>

using namespace std;

class GroceryTracker {
private:
    map<string, int> itemFrequency;

public:
    void LoadData();
    void WriteBackupFile();
    void SearchItem(string item);
    void PrintFrequencies();
    void PrintHistogram();
};