#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    string word = "";
    string shortest = "";

    for (int i = 0; i <= str.length(); i++) {

        if (str[i] != ' ' && str[i] != '\0') {
            word += str[i];
        }
        else {
            if (word.length() > 0) {
                
                if (shortest == "" || word.length() < shortest.length()) {
                    shortest = word;
                }

                word = "";
            }
        }
    }

    cout << "Shortest word: " << shortest;
    cout << "\nLength: " << shortest.length();

    return 0;
}