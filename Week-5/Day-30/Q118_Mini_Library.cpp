#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    string catalogTitles[MAX];
    string authorsList[MAX];
    int bookCount;

    cout << "Enter current total incoming book items: ";
    cin >> bookCount;

    if (bookCount > MAX || bookCount < 1) {
        cout << "System collection database index bound error.\n";
        return 1;
    }

    for (int i = 0; i < bookCount; i++) {
        cin.ignore();
        cout << "Enter Book Title " << (i + 1) << ": ";
        getline(cin, catalogTitles[i]);
        cout << "Enter Author Name for " << catalogTitles[i] << ": ";
        getline(cin, authorsList[i]);
    }

    cout << "\n--- Consolidated Library Book Manifest ---\n";
    for (int i = 0; i < bookCount; i++) {
        cout << "Catalog Record No: " << (i + 1) << " | Title: " << catalogTitles[i] 
             << " | Author Metadata: " << authorsList[i] << "\n";
    }

    return 0;
}