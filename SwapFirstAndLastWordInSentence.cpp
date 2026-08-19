#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    string words[100];
    int count = 0;
    string word = "";

    // Store each word
    for (int i = 0; i <= str.length(); i++) {

        if (str[i] != ' ' && str[i] != '\0') {
            word += str[i];
        }
        else {
            if (word != "") {
                words[count] = word;
                count++;
                word = "";
            }
        }
    }

    // Swap first and last word
    string temp = words[0];
    words[0] = words[count - 1];
    words[count - 1] = temp;

    // Print result
    for (int i = 0; i < count; i++) {
        cout << words[i];

        if (i != count - 1) {
            cout << " ";
        }
    }

    return 0;
}