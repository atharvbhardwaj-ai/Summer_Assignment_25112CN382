#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    int n;
    int ticketIds[MAX];
    string movieNames[MAX];
    double ticketPrices[MAX];

    cout << "Enter number of tickets to issue ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid size entry.";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter Ticket ID " << (i + 1) << " ";
        cin >> ticketIds[i];
        cin.ignore();

        cout << "Enter Movie Name " << (i + 1) << " ";
        getline(cin, movieNames[i]);

        cout << "Enter Ticket Price ";
        cin >> ticketPrices[i];
    }

    cout << "\n--- Ticket Confirmation Counter ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Ticket ID: " << ticketIds[i] << " | Movie: " << movieNames[i] 
             << " | Price: Rs. " << ticketPrices[i] << endl;
    }

    return 0;
}