#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string result = "";

    for (int i = 0; i < str.length(); i++) {

        if (i == 0 || str[i] != str[i - 1]) {
            result += str[i];
        }
    }

    cout << "Result: " << result;

    return 0;
}