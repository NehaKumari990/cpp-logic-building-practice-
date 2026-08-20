#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    cin>>str;
    int i = 0;
    int j = str.length()-1;
    while(i<j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;

    }
    for( i=0;i<str.length();i++){
        cout<<str[i];
    }
}