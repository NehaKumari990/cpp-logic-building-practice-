#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string str = "HELLO WORLD";
    int count = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            count++;
        }
    }
    
    cout<<"Characters excluding Spaces: "<<count;
}