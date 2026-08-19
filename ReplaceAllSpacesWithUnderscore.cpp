#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            str[i] = '_';
        }
    }

    cout << "Result: " << str;

    return 0;
}