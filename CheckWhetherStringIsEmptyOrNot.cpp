#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    if(str.empty()){
        cout << "String is empty";
    }
    else{
        cout << "String is not empty";
    }

    return 0;
}