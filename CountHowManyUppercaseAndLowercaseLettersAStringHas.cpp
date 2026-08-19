#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin,str);
    int uppercase = 0;
    int lowercase = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            lowercase++;
        }
        else if(str[i]>='A' && str[i]<='Z') {
            uppercase++;
        }
        
    }
    cout<<"Lowercase = "<<lowercase<<" "<<"Uppercase = "<<uppercase;
}