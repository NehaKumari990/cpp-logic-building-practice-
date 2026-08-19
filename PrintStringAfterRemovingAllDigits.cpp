#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string result = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] < '0' || str[i] > '9') {
            result += str[i];
        }
    }

    cout << "String after removing digits: " << result;

    return 0;
}