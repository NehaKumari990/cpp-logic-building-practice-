#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    string s1 = "listen";
    string s2 = "silent";

    // Length check
    if (s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }
    unordered_map<char, int> freq;

    // s1 ke characters ko count karo
    for (char ch : s1) {
        freq[ch]++;
    }

    // s2 ke characters ko subtract karo
    for (char ch : s2) {
        freq[ch]--;
    }

    // Check karo sabki frequency 0 hai ya nahi
    for (auto x : freq) {
        if (x.second != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";
    return 0;
}