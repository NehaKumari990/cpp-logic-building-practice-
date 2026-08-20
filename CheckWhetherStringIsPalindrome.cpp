#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int i = 0;
    int j = str.length() - 1;

    bool palindrome = true;

    while(i < j){

        if(str[i] != str[j]){
            palindrome = false;
            break;
        }

        i++;
        j--;
    }

    if(palindrome){
        cout << "String is palindrome";
    }
    else{
        cout << "String is not palindrome";
    }

    return 0;
}