# include<iostream>
# include <string>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch >='A' && ch <='Z'){
        cout<<"uppercase";
    }
    else if(ch >= 'a' && ch<= 'b'){
        cout<<"lowercase";
    }
    else if (ch >= '0' && ch<= '9' ){
        cout<<"digit";
    }
    else {
        cout<<"special charachter";
    }
}