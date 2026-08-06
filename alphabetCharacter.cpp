# include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='m'){
        cout<<"lies between a and m";
    }
    else if(ch>='n' && ch<='z'){
        cout<<"lies between n and z";
    }
    else {
        cout<<"invalid input";
    }
}