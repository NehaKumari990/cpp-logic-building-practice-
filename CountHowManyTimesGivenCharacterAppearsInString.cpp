#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin,str);
    char ch ;
    cout<<"enter the character you want: ";
    cin>>ch;
    int count = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]==ch){
            count++;
        } 
    }
    cout<<ch<<" = "<<count;
}