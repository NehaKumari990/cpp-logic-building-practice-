#include<iostream>
using namespace std;

int main(){
    string str;
    
    cout << "Enter a string: ";
    cin >> str;

    string rev = "";

    for(int i = str.length() - 1; i >= 0; i--){
        rev = rev + str[i];
    }

    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << rev;

    return 0;
}