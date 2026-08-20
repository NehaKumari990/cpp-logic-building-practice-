#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();

    cout << "Second half in reverse: ";

    for(int i = n - 1; i >= n/2; i--){
        cout << str[i];
    }

    return 0;
}