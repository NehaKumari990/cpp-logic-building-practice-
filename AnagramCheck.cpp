#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s1 = "listen";
    string s2 = "silent";

    if(s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    unordered_map<char, int> freq1;
    unordered_map<char, int> freq2;

    for(char x : s1) {
        freq1[x]++;
    }

    for(char x : s2) {
        freq2[x]++;
    }

    bool isAnagram = true;

    for(char x : s1) {
        if(freq1[x] != freq2[x]) {
            isAnagram = false;
            break;
        }
    }

    if(isAnagram)
        cout << "Anagram";
    else
        cout << "Not Anagram";
}