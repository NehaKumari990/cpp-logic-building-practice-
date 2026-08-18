#include<iostream>
using namespace std;

int main(){
    string str = "hello";
    // int length = str.length();

    int length = 0;

    while(str[length] != '\0'){
        length++;
    }
     cout<<length<<endl;


    cout<<"Original String: ";
    for(int i=0;i<length;i++){
        cout<<str[i]<<" ";
    }
}