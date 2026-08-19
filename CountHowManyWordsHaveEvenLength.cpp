#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    int count = 0;
    int length = 0;

    for (int i = 0; i <= str.length(); i++) {

        if (str[i] != ' ' && str[i] != '\0') {
            length++;
        }
        else {
            if (length > 0 && length % 2 == 0) {
                count++;
            }

            length = 0;
        }
    }

    cout << "Number of even length words: " << count;

    return 0;
}