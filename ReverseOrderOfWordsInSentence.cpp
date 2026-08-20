#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    int end = str.length() - 1;

    for(int i = str.length() - 1; i >= 0; i--){

        if(str[i] == ' '){

            for(int j = i + 1; j <= end; j++){
                cout << str[j];
            }

            cout << " ";
            end = i - 1;
        }
    }

    // Print the first word
    for(int i = 0; i <= end; i++){
        cout << str[i];
    }

    return 0;
}