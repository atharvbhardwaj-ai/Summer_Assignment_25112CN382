#include<iostream>
#include<string>
using namespace std;

void findCommonCharacters(const string &s1, const string &s2) {
    int freq1[256] = {0};
    int freq2[256] = {0};

    for (int i = 0; s1[i] != '\0'; i++) {
        freq1[s1[i]]++;
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        freq2[s2[i]]++;
    }

    bool found = false;
    for (int i = 0; i < 256; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            int common_count = (freq1[i] < freq2[i]) ? freq1[i] : freq2[i];
            for (int c = 0; c < common_count; c++) {
                cout << (char)i << " ";
                found = true;
            }
        }
    }
    if (!found) {
        cout << "No common characters found";
    }
}

int main() {
    string str1, str2;

    cout << "Enter first string ";
    getline(cin, str1);

    cout << "Enter second string ";
    getline(cin, str2);

    if (str1.empty() || str2.empty()) {
        cout << "Input strings cannot be empty";
        return 1;
    }

    cout << "Common characters are -\n";
    findCommonCharacters(str1, str2);

    return 0;
}