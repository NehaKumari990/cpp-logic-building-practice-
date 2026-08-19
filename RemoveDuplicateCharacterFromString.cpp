#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string result = "";

    for (int i = 0; i < str.length(); i++) {

        bool found = false;

        // Check whether character is already in result
        for (int j = 0; j < result.length(); j++) {
            if (str[i] == result[j]) {
                found = true;
                break;
            }
        }

        // If character is not found, add it
        if (!found) {
            result += str[i];
        }
    }

    cout << "After removing duplicates: " << result;

    return 0;
}