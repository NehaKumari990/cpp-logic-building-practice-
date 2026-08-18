#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string str = "hello";
    for(int i=0;i<str.length();i++){
        str[i] = toupper(str[i]);
        //cout<<str[i]; 
    }
    cout << "Uppercase String: " << str;
}