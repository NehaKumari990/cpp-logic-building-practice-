#include<iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    cin>>str;
    int count = 0;

for(int i = 0; i < str.length(); i++){
    for(int j = i; j < str.length(); j++){
        if(str[i] == str[j]){
            count++;
        }
    }
}
cout<<count;
}