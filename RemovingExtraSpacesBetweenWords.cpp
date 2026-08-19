#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    string result = "";

    for (int i = 0; i < str.length(); i++) {

        if (str[i] != ' ') {
            result += str[i];
        }
        else {
            if (!result.empty() && result.back() != ' ') {
                result += ' ';
            }
        }
    }

    // Remove trailing space
    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }

    cout << "Normalized sentence: " << result;

    return 0;
}