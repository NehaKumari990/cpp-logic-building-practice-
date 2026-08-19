#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {

        if (str[i] == ' ') {
            cout << endl;
        }
        else {
            cout << str[i];
        }
    }

    return 0;
}