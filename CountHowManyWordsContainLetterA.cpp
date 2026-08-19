#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    string word = "";
    int count = 0;

    for (int i = 0; i <= str.length(); i++) {

        if (str[i] != ' ' && str[i] != '\0') {
            word += str[i];
        }
        else {
            if (word.length() > 0) {

                bool found = false;

                for (int j = 0; j < word.length(); j++) {
                    if (word[j] == 'a') {
                        found = true;
                        break;
                    }
                }

                if (found) {
                    count++;
                }

                word = "";
            }
        }
    }

    cout << "Number of words containing 'a': " << count;

    return 0;
}