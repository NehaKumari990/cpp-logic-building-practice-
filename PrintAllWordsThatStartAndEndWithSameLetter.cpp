#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    string word = "";

    for (int i = 0; i <= str.length(); i++) {

        if (str[i] != ' ' && str[i] != '\0') {
            word += str[i];
        }
        else {
            if (word.length() > 0) {

                if (word[0] == word[word.length() - 1]) {
                    cout << word << endl;
                }

                word = "";
            }
        }
    }

    return 0;
}