#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string str = "HELLO";
    for(int i=0;i<str.length();i++){
        str[i] = tolower(str[i]);
        //cout<<str[i];
    }
    cout << "Lowercase String: " << str;
}