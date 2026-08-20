#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();

    if(n % 2 != 0){
        // Odd length → one middle character
        cout << "Middle character: " << str[n/2];
    }
    else{
        // Even length → two middle characters
        cout << "Middle characters: "
             << str[n/2 - 1] << str[n/2];
    }

    return 0;
}