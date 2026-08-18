#include<iostream>
using namespace std;

int main(){
    string str1,str2;
    cout<<"enter first string: ";
    cin>>str1;
    cout<<"enter second string: ";
    cin>>str2;
    if(str1>str2){
        cout<<str2<<" comes first";
    }
    else if(str2>str1){
        cout<<str1<<" comes first";
    }
    else{
        cout<<"both strings are equal";
    }
}